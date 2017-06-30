/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head linked list library
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

/*
  交换数值
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

//int bubble_sort(struct list **head)
//{
//  if (*head==NULL) {
//    printf("error\n");
//    return -1;
//  } else if ((*head)->next == NULL) {
//    return 0;
//  }
//
//  struct list *p, *q;
//  struct list *h = *head;
//
//  for (p=h; p != NULL; p=p->next){
//    for(q=h; q->next != NULL; q=q->next)
//      if(q->value > q->next->value) {
//        int tmp = q->value;
//        q->value = q->next->value;
//        q->next->value = tmp;
//      }
//  }
//  return 0;
//}
//

/*
  交换指针
*/
int insertion_sort(struct list **head)
{
  if (*head==NULL) {
    printf("error\n");
    return -1;
  } else if ((*head)->next == NULL) {
    return 0;
  }

  struct list *first = NULL;
  struct list *curr = NULL;
  struct list *prev = NULL;
  struct list *post = NULL;

  first = (*head)->next;
  (*head)->next = NULL;
  for(;first != NULL;) {
    curr = first;
    post = *head;
    while(post != NULL && post->value < curr->value){
      prev = post;
      post = post->next;
    }
    first = first->next;
    if(post == *head){
      *head = curr;
    } else {
      prev->next = curr;
    }
    curr->next = post;
  }
}


int bubble_sort(struct list **head)
{
  if (*head==NULL) {
    printf("error\n");
    return -1;
  } else if ((*head)->next == NULL) {
    return 0;
  }

  struct list *first = *head;
  struct list *prev, *curr, *post;
  int len = get_length(*head);

  for (int i=0; i < len; i++) {
    prev = NULL;
    curr = first;
    post = curr->next;

    for(; post != NULL;) {
      if(curr->value > post->value) {
        if(curr == first)
          first = post;
        else
          prev->next = post;

        curr->next = post->next;
        post->next = curr;
        prev = post;
        post = curr->next;
      } else {
        prev = curr;
        curr = post;
        post = post ->next;
      }
    }
  }
  *head = first;
  return 0;
}
