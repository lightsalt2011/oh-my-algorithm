/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head link list library
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int create_list(struct list **head, int len)
{
  int i;
  struct list *new;
  struct list *p=NULL;
  struct list *tmp_head;

  for(i=0; i<len; i++) {
    new = malloc(sizeof(struct list));
    if(!new) {
      printf("malloc error, check memory\n");
      return -1;
    }

    new->value = 0;//init

    if(p == NULL) { //first node
      tmp_head=new;
      p=new;
    } else {
      p->next=new;
      p=p->next;
    }
  }
  p->next = NULL;
  *head = tmp_head;
  return 0;
}

void random_list(struct list *head)
{
  srand(time(0));
	struct list *p = head;
	for(;p != NULL;) {
		p->value = rand() % 100;
		p=p->next;
	}
}

void display_list(struct list *head)
{
  if(head == NULL) {
    printf("empty list\n");
    return;
  }

  struct list *p = head;
  for(;p != NULL;) {
      printf("%d ", p->value);
      p=p->next;
  }
  printf("\n");
}

//步步迈进法
int reverse_list(struct list **head)
{
  struct list *prev = NULL;
  struct list *p = *head;
  struct list *tmp;

  for(; p != NULL;){
    tmp = p->next; //保存下一个节点地址
    p->next = prev; //将当前节点的指向prev
    prev = p; //前进，当前节点赋值给new_head，准备下一轮
    p = tmp; //前进，下一个节点地址变成当前pos
  }
  *head = prev;
  return 0;
}

int get_length(struct list *head)
{
  struct list *p = head;
  int len = 0;
  for(;p != NULL;){
    len++;
    p=p->next;
  }
  return len;
}

//insert befor which position
int insert_node(struct list **head, int index, int data)
{
  struct list *p=*head;
  struct list *new, *prev;

  if(*head == NULL || index < 1 || index-1 > get_length(p)) {
    printf("pos not exist\n");
    return -1;
  }

  new = malloc(sizeof(struct list));
  if(!new)
    return -1;

  if(index == 1) {
    new->value = data;
    new->next = *head;
    *head = new; //改变新表头
  } else {
    for (int i=1; i<index; i++) {
      prev=p;
      p=p->next;
    }
    new->value = data;
    new->next = prev->next;
    prev->next = new;
  }
  return 0;
}

int change_node(struct list **head, int index, int data)
{
  struct list *p = *head;
  if(*head == NULL || index < 1 || index > get_length(p)) {
    printf("pos not exist\n");
    return -1;
  }
  if(index==1) {
    p->value = data;
  } else {
    for (int i=1;i<index;i++){
      p=p->next;
    }
    p->value=data;
  }
  return 0;
}

int delete_node(struct list **head, int index)
{
  struct list *p=*head;
  struct list *prev;

  if(head == NULL || index < 1 || index > get_length(p)) {
    printf("pos not exist\n");
    return -1;
  }

  if(index == 1){//头节点
    *head=p->next;
    free(p);
  } else {
    for (int i=1; i<index; i++){
      prev=p;
      p=p->next;
    }
    prev->next=p->next;
    free(p);
  }
  return 0;
}

int delete_list(struct list **head)
{
  struct list *p = *head;
  struct list *tmp;
  for(;p != NULL; ) {
    tmp = p->next;
    free(p);
    p = tmp;
  }
  *head = NULL;
}
