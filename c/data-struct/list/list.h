/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head linked list library
*/
#ifndef _LIST_H_
#define _LIST_H_
struct list
{
  int value;
  struct list *next;
};

/* struct list **head is the linked list;
   and *head is the head node */

int create_list(struct list **head, int len);
int get_length(struct list **head);

void random_list(struct list **head);
void display_list(struct list **head);

int reverse_list(struct list **head);
int insert_node(struct list **head, int index, int data);
int change_node(struct list **head, int index, int data);
int delete_node(struct list **head, int index);
int delete_list(struct list **head);

int selection_sort(struct list **head);
int insertion_sort(struct list **head);
int bubble_sort(struct list **head);

//merge_sort.c
int merge_sort(struct list **head);

// hard to write
//链表很难实现希尔排序，堆排序和快速排序
//因为这几种排序需要大量的非连续访问
//int shell_sort(struct list **head);
//int heap_sort(struct list **head);
//int quick_sort(struct list **head);
#endif
