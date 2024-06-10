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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static uint32_t buf_p = 0;

static int choose(uint32_t n){
//generate a rand num < n
return rand() % n;
}

static void gen(char c)	{
	buf[buf_p ++] = c;
}

static inline void gen_blank(){
	int blank_num = choose(3);
	for (int i = 0;  i < blank_num; i++){
		buf[buf_p ++] = ' ';
	}
}	

static void gen_num(){
	uint32_t num = rand() % 100;
	uint32_t cnt = 0;
	cnt =	sprintf(buf+buf_p, "%u", num);
	buf_p = buf_p + cnt;
	gen_blank();
}
#define MAX_DEPTH 5
static void gen_rand_expr(int depth) {
 // buf[0] = '\0';
	if (depth > MAX_DEPTH){
		gen_num();
		return;
	}
	switch (choose(3)) {
		case 0: gen_num();	break;
		case 1:	gen('('); gen_rand_expr(depth+1); gen(')');	break;
		//case 2:
		default:{	
			gen_rand_expr(depth + 1); 
			switch (choose(4)) {
                case 0: gen('+'); break; 
                case 1: gen('-'); break; 
                case 2: gen('*'); break; 
                case 3: gen('/'); break; 
								default: gen(' '); break;      
			}
			gen_blank();
			gen_rand_expr(depth+1);	
			break;
		}
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_p = 0;
		gen_rand_expr(0);
		buf[buf_p] = '\0';
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);
		//add the parameter -Werror -Wall
    int ret = system("gcc /tmp/.code.c -Werror -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
