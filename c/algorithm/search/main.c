/*
  oh-my-algorithm search
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "search.h"

#define ARRAY_LEN 50

#define LOOP_TIME 10


static int comp(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);//up
  //return (*(int *)a - *(int *)b);//down
}

static int quick_sort(int array[], int len)
{
  int start = 0;
  int end = len - 1;

  qsort(&array[start], end + 1, sizeof(int), comp);
  return 0;
}

int main()
{
  int len = ARRAY_LEN;
  int my_array[ARRAY_LEN];

  int key = 49;

  int pos;

  printf("random array\n");
  random_array(my_array, len, len *10);
  display_array(my_array, len);

  pos = sequence_search(my_array, len, key);
  printf("pos is %d\n", pos);

  printf("sorted array\n");
  quick_sort(my_array, len);
  display_array(my_array, len);

}
