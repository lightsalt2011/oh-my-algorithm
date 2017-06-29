#include <stdio.h>
#include <stdlib.h>

struct list
{
  int value;
  struct list *next;
};

//步步迈进法
struct list *reverse_list(struct list *head){
  struct list *new_head = NULL;
  struct list *p, *tmp;
  for(p = head; p != NULL;){
    tmp = p->next; //保存下一个节点地址
    p->next = new_head; //下一个地址赋值为new_head
    new_head = p; //前进，当前pos赋值给new_head，准备下一轮
    p = tmp; //前进，下一个节点地址变成当前pos
  }
  return new_head;
}

int create_list(struct list **head, int len) {
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
    new->value = i;
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

void display_list(struct list *head){
    struct list *p = head;
    for(;p != NULL;) {
        printf("\t%d ", p->value);
        p=p->next;
    }
    printf("\n");
}

int main()
{
  struct list *head;
  int len = 100;
  int ret = create_list(&head, len);
  if(ret)
    printf("create list error\n");
  display_list(head);

  printf("\nnow reverse this list\n");
  display_list(reverse_list(head));
}
