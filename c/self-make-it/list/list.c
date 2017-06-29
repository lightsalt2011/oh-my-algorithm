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
int *reverse(struct list **head)
{
  struct list *new_head = NULL;
  struct list *p = *head;
  struct list *tmp;

  for(; p != NULL;){
    tmp = p->next; //保存下一个节点地址
    p->next = new_head; //下一个地址赋值为new_head
    new_head = p; //前进，当前pos赋值给new_head，准备下一轮
    p = tmp; //前进，下一个节点地址变成当前pos
  }
  *head = new_head;
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
int insert(struct list **head, int pos, int data) 
{
  struct list *p=*head;
  struct list *new;

  if(head == NULL || pos < 1) {
    return -1;
  }

  new = malloc(sizeof(struct list));
  if(!new)
    return -1;

  if(pos == 1) {
    new->value = data;
    new->next = *head;
    *head = new; //改变新表头
  } else {
    if((pos-1) > get_length(p)){
      printf("pos not exist\n");
      return -1;
    }
    for (int i=1; i<pos-1; i++)
      p=p->next;

    new->value = data;
    new->next = p->next;
    p->next = new;
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
    p = p->next;
  }
  *head = NULL;
}

//无表头链表，有可能改变表头的操作，传参都需要用表头取地址传入。
int main()
{
  srand(time(0));

  struct list *my_list;
  int len = 25;
  int ret = create_list(&my_list, len);
  if(ret)
    printf("create list error\n");
  random_list(my_list);
  display_list(my_list);

  printf("\nnow insert\n");
  insert(&my_list, 10, 50);
  display_list(my_list);

  printf("\nnow reverse this list\n");
  reverse(&my_list);
  display_list(my_list);

  delete_list(&my_list);
  display_list(my_list);
}
