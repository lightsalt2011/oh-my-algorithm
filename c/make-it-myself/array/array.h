/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself array library
*/
#ifndef _ARRAY_H_
#define _ARRAY_H_

/* since array is often in stack not heap, we do not need 'create func' by malloc */
/* array must give its length */

//int create_array();
//int insert_member();
//int change_member();
//int delete_member();
//int delete_array();

//array.c
void random_array(int array[], int len);
void display_array(int array[], int len);
int reverse_array(int array[], int len);

//sort.c
int bubble_sort(int array[], int len);
int selection_sort(int array[], int len);
int insertion_sort(int array[], int len);

//shell_sort.c
int shell_sort(int array[], int len);

//heap_sort.c
int heap_sort(int array[], int len);

//quick_sort.c
int quick_sort(int array[], int len);
#endif
