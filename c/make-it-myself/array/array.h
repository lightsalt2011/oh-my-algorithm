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

//simple_sort.c
//time:  O(n^2)
//space: O(1)
int bubble_sort(int array[], int len);
int selection_sort(int array[], int len);
int insertion_sort(int array[], int len);

//shell_sort.c
//time:  O(n^1.3)
//space: O(1)
int shell_sort(int array[], int len);

//heap_sort.c
//time:  O(nlogn)
//space: O(1)
int heap_sort(int array[], int len);

//merge_sort.c
//time:  O(nlogn)
//space: O(n)
int merge_sort(int array[], int len);

//quick_sort.c
//time:  O(nlogn)
//space: O(logn)
int quick_sort(int array[], int len);
#endif
