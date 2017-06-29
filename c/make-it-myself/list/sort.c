/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head link list library test program
*/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
选择排序
插入排序
冒泡排序
希尔排序
*/

int selection_sort(struct list **head)
{
  struct list *p, *q;

  if (*head==NULL) {
    printf("error\n");
    return -1;
  } else if ((*head)->next == NULL) {
    return 0;
  }

  for(p = *head; p != NULL;p=p->next)
    for(q = p->next; q != NULL; q=q->next)
    {
      if(p->value > q->value) {
        int tmp = q->value;
        q->value = p->value;
        p->value = tmp;
      }
    }
}

int insertion_sort(struct list **head)
{
  if (*head==NULL) {
    printf("error\n");
    return -1;
  } else if ((*head)->next == NULL) {
    return 0;
  }

  //TODO
}

int bubble_sort(struct list **head)
{
  if (*head==NULL) {
    printf("error\n");
    return -1;
  } else if ((*head)->next == NULL) {
    return 0;
  }

  struct list *p, *q;
  struct list *h = *head;

  for (p=h; p != NULL; p=p->next){
    for(q=h; q->next != NULL; q=q->next)
      if(q->value > q->next->value) {
        int tmp = q->value;
        q->value = q->next->value;
        q->next->value = tmp;
      }
  }
  return 0;
}
