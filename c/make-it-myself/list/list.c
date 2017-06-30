/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head linked list library
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int create_list(struct list **head, int len)
{
  int i;
  struct list *new;
  struct list *curr=NULL;

  for(i=0; i<len; i++) {
    new = malloc(sizeof(struct list));
    if(!new) {
      printf("malloc error, check memory\n");
      return -1;
    }

    new->value = 0;//init

    if(curr == NULL) { //first node
      *head=new;
      curr=new;
    } else {
      curr->next=new;
      curr=curr->next;
    }
  }
  curr->next = NULL;
  return 0;
}

void random_list(struct list *head)
{
  static int init = 0;
  if(!init){
    init = 1;
    srand(time(0));
  }

  struct list *curr = head;
	for(;curr != NULL;) {
		curr->value = rand() % 100;
		curr=curr->next;
	}
}

void display_list(struct list *head)
{
  if(head == NULL) {
    printf("empty list\n");
    return;
  }

  struct list *curr = head;
  for(;curr != NULL;) {
      printf("%d ", curr->value);
      curr=curr->next;
  }
  printf("\n");
}

//步步迈进法
int reverse_list(struct list **head)
{
  struct list *prev = NULL;
  struct list *curr = *head;
  struct list *post = curr->next;

  for(; curr != NULL;){
    post = curr->next; //保存下一个节点地址
    curr->next = prev; //将当前节点的指向prev
    prev = curr; //前进
    curr = post; //前进
  }

  *head = prev;//表头时prev而不是curr，因为此时curr已经为NULL
  return 0;
}

int get_length(struct list *head)
{
  struct list *curr = head;
  int len = 0;
  for(;curr != NULL;){
    len++;
    curr=curr->next;
  }
  return len;
}

//insert befor which position
int insert_node(struct list **head, int index, int data)
{
  struct list *curr=*head;
  struct list *prev=NULL;
  struct list *new=NULL;

  if(*head == NULL || index < 1 || index-1 > get_length(*head)) {
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
      prev=curr;
      curr=curr->next;
    }
    new->value = data;
    new->next = prev->next;
    prev->next = new;
  }
  return 0;
}

int change_node(struct list **head, int index, int data)
{
  struct list *curr = *head;
  if(*head == NULL || index < 1 || index > get_length(*head)) {
    printf("pos not exist\n");
    return -1;
  }

  if(index==1) {
    curr->value = data;
  } else {
    for (int i=1;i<index;i++){
      curr=curr->next;
    }
    curr->value=data;
  }
  return 0;
}

int delete_node(struct list **head, int index)
{
  struct list *curr=*head;
  struct list *prev;

  if(head == NULL || index < 1 || index > get_length(*head)) {
    printf("pos not exist\n");
    return -1;
  }

  if(index == 1){//头节点
    *head=curr->next;
    free(curr);
  } else {
    for (int i=1; i<index; i++){
      prev=curr;
      curr=curr->next;
    }
    prev->next=curr->next;
    free(curr);
  }
  return 0;
}

int delete_list(struct list **head)
{
  struct list *curr = *head;
  struct list *post;
  for(;curr != NULL; ) {
    post = curr->next;
    free(curr);
    curr = post;
  }
  *head = NULL;
}
