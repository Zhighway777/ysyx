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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
	char expr[32];
	word_t old_val, new_val;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
//static: 静态变量，说明WP wp_pool只在本c文件中起作用。
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  } 

  head = NULL;
  free_ = wp_pool;
}

static WP* new_up(){ //head insert into the "head link"
	if (free_ == NULL){
		Log("There is no free watchpoint");
		assert(0);
 	}
	WP* tmp = free_;
	free_ = free_->next;
	tmp->next = head;
	head = tmp;
	return tmp;
}

static void free_up(WP *wp){
	WP* tmp = head;
	if (tmp == wp){
		head = NULL;	
	}else {
 		while (tmp && tmp->next != wp){
			tmp = tmp -> next;
		}
		if (tmp == NULL)
			assert(0);
		tmp->next = wp->next; //free wp
 	}
	wp->next = free_;
	free_ = wp;
}

void wp_scan(){
	WP* tmp = head;
	if(!tmp){
		printf("Touch the end of watchpoint list\n");
		return;
	} 
	printf("Num\b\b\bWhat\b\b\b\n");
	while(tmp){
		printf("%d\b\b\b%s\b\b\b\n",  tmp->NO, tmp->expr);
		tmp = tmp->next;
	} 
}

void wp_print(char* expr, word_t val){
	WP* wp = new_up();
	strcpy(wp->expr, expr);
	wp->old_val = val;
	printf("The watchpoint %d : %s\n", wp->NO, wp->expr);
}

void wp_remove(int nr){
	assert(nr < NR_WP);
	WP* wp = &wp_pool[nr];
	Log("wp_pool[nr] = %s\n", wp->expr);
	free_up(wp);
	printf("Delete watchpoint %d: %s \n", wp->NO, wp->expr);
}


void wp_show(){
	WP* tmp = head;
	while(tmp){
		bool suc;
		word_t new_val = expr(tmp->expr, &suc);
		if (tmp->old_val != new_val){
			printf("watchpoint %d : %s\n", tmp->NO, tmp->expr);
			printf("Old value = %lu\n", tmp->old_val);
			printf("New value = %lu\n", new_val);
			tmp->old_val = new_val;
			printf("You attach the watchpoint!\n");
			nemu_state.state = NEMU_STOP;
		} 
		tmp = tmp->next;
	}	  
}

/* TODO: Implement the functionality of watchpoint */

