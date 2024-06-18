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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT; 
	return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
	uint64_t n = 0;
	char *arg = strtok(NULL, " ");
	if (arg == NULL){
		cpu_exec(1);
		return 0;
	}
	n = atoi(arg);
	if (n < 0){
		printf("The N is less than 0!\n");
		return 0;
	}
	else if (n == 0){
		n = 1;
	}
	cpu_exec(n);
	return 0;
}


//declaratioin 
void wp_scan();


static int cmd_info(char *args){
	char *arg = strtok(NULL, " ");
	if (strcmp(arg,"r") == 0){
	//print the reg info
	isa_reg_display();
	return 0;
	}
	else if (strcmp(arg,"w") == 0){
	//print the watch point info
		wp_scan();
	}
	else{
		printf("You should use 'r' for regsiters or 'w' for watchpoints to get status.\n");
	}
	return 0;
}

// 判断字符串是否是一个有效的十六进制数字
bool is_hexadecimal(const char *str) {
    // 检查字符串是否以 "0x" 或 "0X" 开头
    if (str == NULL || strlen(str) < 3 || (str[0] != '0' || (str[1] != 'x' && str[1] != 'X'))) {
        return false;
    }

    // 检查字符串的其余部分是否只包含有效的十六进制字符
    for (int i = 2; str[i] != '\0'; i++) {
        if (!isxdigit(str[i])) {
            return false;
        }
    }

    return true;
}

word_t paddr_read(paddr_t addr, int len);

static int cmd_xmem(char *args){
	char *arg = strtok(NULL, " ");
	int len;
	len = atoi(arg);
	paddr_t addr;
	//simple, constant the EXPR Number.
	const char *expr = strtok(NULL, " ");
	if (! is_hexadecimal(expr)){
		printf("Please input Hexadecimal number!\n");
	}
	else{
		sscanf(expr, "%x", &addr);
		static int i;
		for(i = 0; i < len; i++){
			printf("%x: %08lx\n",addr, paddr_read(addr, 4));
			addr += 4;
		}
	}
	return 0;
}

static int cmd_comp(char * args){
	//char *arg = strtok(NULL, " ");
	//如果仍然[space]作为分隔符 那么表达式中的[space]会怎么样
	bool success = true;
	word_t val = expr(args, &success);
	if (!success)
		printf("The expression is invalid.\n");
	else
		printf("The result of the expression is %lu.\n",val );
	return 0;
}

void wp_print(char* args, word_t val);

static int cmd_wp(char * args){
	bool success;
	word_t val = expr(args, &success);
	if(! success)
			printf("illeagal expression\n");
	else
			wp_print(args, val);	
	return 0;
}

void wp_remove(int nr);

static int cmd_dwp(char *args){
	char *arg = strtok(NULL, " ");
	if(arg == NULL){
		printf("no args\n");
		return 0;
	}	else	{
		int nr = strtol(arg, NULL, 10); //or atoi()
		wp_remove(nr);
		return 0;
	}
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
	{	"si", "Single execuate", cmd_si },
	{	"info", "Print the status of registers, or print the watch point info", cmd_info}, 
	{"x", "Scan the Memory From 'EXPR' to 'EXPT+N'.", cmd_xmem},	
	{"p", "Compute the value of expression.", cmd_comp},
	{"w", "Set a watchpoint with EXPR", cmd_wp},
	{"d", "delete the Number N of watchpoint", cmd_dwp},
	
	/* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) { //batch mode指的是批处理人物，不需要实时交互
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
