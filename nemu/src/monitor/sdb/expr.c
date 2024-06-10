/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {	TK_NOTYPE = 256, 
				TK_EQ , TK_NEQ, TK_GT, TK_LT, TK_GE, TK_LE,
				TK_AND, TK_OR,
				TK_NUM, 
				TK_NEG, TK_DEREF, TK_POS,
				TK_REG,
				
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TOO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces 空格串
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
	{"-", '-'},
	{"\\*", '*'},
	{"/", '/'},
	{"[0-9]+", TK_NUM},
	{"\\(", '('},
	{"\\)", ')'},
	{"<", TK_LT},
	{">", TK_GT},
	{"<=", TK_LE},
	{">=", TK_GE},
	{"==", TK_EQ},
	{"!=", TK_NEQ},
	{"&&", TK_AND},
	{"\\|\\|", TK_OR},
};


#define NR_REGEX ARRLEN(rules)

//define the types of oprators
#define OFTYPES(type, types) oftypes(type, types, ARRLEN(types))
static int unary_types[] = {TK_NEG, TK_POS, TK_DEREF};
static int unary_flag_types[] = {TK_NUM, ')'};//if tokens[i-1] not in this, then it is unary op
static int non_op_types[] = {'(', ')', TK_NUM};
static bool oftypes(int type, int types[], int size){
	for(int i = 0; i < size; i++) {
		if (type == types[i])
				return true;
	}
	return false;
}

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i  < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)  {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;//确保变量不会被优化掉

static bool check_unary(int i);


static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
				//re[i]存放的是rule[i]compile后的结果
				if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
					char *substr_start = e + position;
					int substr_len = pmatch.rm_eo;

					Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
							i, rules[i].regex, position, substr_len, substr_len, substr_start);

					position += substr_len;
					
					switch  (rules[i].token_type) {
						case TK_NOTYPE:
						//no need to record, just skip it!	
						break;
		
						case '-': case '+':
							if( check_unary(nr_token) ){
								switch (rules[i].token_type)
								{
									case '-':	tokens[nr_token].type = TK_NEG;nr_token++;	break;
									case '+': tokens[nr_token].type = TK_POS;nr_token++;	break;
								}
							}
							else{
									tokens[nr_token].type = rules[i].token_type;
									nr_token++; //token is updated here!
							}
						break; 
						case TK_NUM:
						default: 
							if (substr_len > 32){
								Log("The token's str buffer is overflow\n");
								return false;
							}
							tokens[nr_token].type = rules[i].token_type;
							//strncpy is good at controling the start and end of string.
							//only record the num into string
							if(tokens[nr_token].type == TK_NUM)
								strncpy(tokens[nr_token].str, substr_start, substr_len);
							tokens[nr_token].str[substr_len] = '\0';
							nr_token++; //token is updated here!
							break;
				  	} 
						break;
				}
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static bool check_parentheses(int p, int q){
	int unpair = 0;
	if(tokens[p].type == '(' && tokens[q].type == ')'){
		for  (int i = p; i <= q; i++){
			if(tokens[i].type == '(')
				unpair ++;
			else if(tokens[i].type == ')')
				unpair --;
			if (unpair == 0)
				return i == q;// if i == q && unpair == 0
			}
		}
	return false;	
}

static bool check_unary(int i){
		if(i == 0 || !OFTYPES(tokens[i-1].type, unary_flag_types)	)
		//indicate "op" is a single op
			return true;	
		else	return false;
}


int oprator_pir(int op){
	switch (op){ 
		case TK_NEG: 
							return 1;
		case '*': 
		case '/':	return 2;
		case '+':
		case '-':	return 3;
	
	//	case TK_DEREF: return 3;
		default : 
							Log("You give an illeagal operator\n");
							assert(0);
	}
}

static int domain_oprator(int p, int q){
	int cnt = 0;
	int domain = -1; //如果没有主运算 那么要么是数字 要么是单目
									//domain保持为0 使得后续 eval(op+1, q) eval(p, op-1)正常处理
	int pir = 0;
	for( int i = p; i <=  q; i++){

		if(tokens[i].type == '(')
			cnt ++;
		else if(tokens[i].type == ')')
			cnt --;
		//用于排除在()中的操作符
		if(cnt > 0 || OFTYPES(tokens[i].type, non_op_types) )	continue;
		if( tokens[i].type == TK_NEG ){
			if(  oprator_pir(tokens[i].type) > pir ){
				pir = oprator_pir(tokens[i].type);
				domain = i;
			}
			continue; //this expression has no domain oprator
		}
		if(  !OFTYPES(tokens[i].type, unary_types) && oprator_pir(tokens[i].type) >= pir ){
		 	//<=保证最后一个为domain op
				pir = oprator_pir(tokens[i].type);
				domain = i;
		 }	
	} 
	if (cnt != 0) return -1;	
	return domain;
}

static word_t comp_unary(int op_type, word_t val, bool *success){
	switch(op_type){
		case TK_NEG:	return -val;
		case TK_POS:	return val;
		default:
						*success = false;
	}
	return 0;
}

static word_t comp_binary(word_t val1, int op_type, word_t val2, bool *success){
	switch(op_type){
			case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': 
								if (val2 == 0){
									*success = false;
									return 0;
								}
								return (sword_t)val1 / (sword_t)val2;//because the testcase
      default:
								Log("the oprator is illeagal!\n");
							 //	assert(0);
							 *success = false;
							 return 0;
    }
}

static word_t eval(int p, int q, bool *success) {
  *success = true;
	if (p > q) {
		Log("There are something wrong because p < q\n");
		//assert(0); //give a information
		*success = false;
		return 0;
	}
  else if (p == q) {
		if(tokens[p].type != TK_NUM){
			*success = false;
			return 0;
		}
		//promise the return value is 64 bits-unsigned number
		word_t ret = atoi(tokens[p].str);
		return ret; //str2val
  }
  else{
	 	if ( check_parentheses(p, q) ) {
			return eval(p + 1, q - 1, success);
		}
		else {
			int	op = domain_oprator(p, q);
			//fix the compute methods
			
			bool suc_left, suc_right;

			word_t	val1 = eval(p, op - 1, &suc_left);
			word_t	val2 = eval(op + 1, q, &suc_right);

			if (!suc_right){
				//if right expression has fault, the whole expr is wrong.
				*success = false;
				return 0;
			}
			else if (!suc_left){
				//indicting that the unary opration
				word_t val = comp_unary(tokens[op].type, val2, success);
				return val;
			}
			else{
				word_t val = comp_binary(val1, tokens[op].type, val2, success);
				return val;
			}
		}
	}
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
/*	for(int i=0; i < nr_token; i++){
		if(	check_unary(i) )
		{
				switch(tokens[i].type){
					case '-':
							tokens[i].type = TK_NEG;
							break;
					default:
							;
							break;	
				}	
		}
	}*/
  /* TODO: Insert codes to evaluate the expression. */
	return eval(0, nr_token-1, success);	
	
}
