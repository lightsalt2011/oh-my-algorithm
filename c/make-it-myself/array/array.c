/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself array library
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

void random_array(int array[], int len)
{
  static int init = 0;
  if(!init){
    //init = 1;
    //srand(time(0));
    srand(63);
  }

  if(array == NULL || len == 0) {
    printf("empty array\n");
    return;
  }

	for(int i=0; i < len;i++) {
		array[i] = rand() % 1000;
	}
}

void display_array(int array[], int len)
{
  //  return;

  if(array == NULL || len == 0) {
    printf("empty array\n");
    return;
  }

  for(int i=0; i < len; i++) {
      printf("%d ", array[i]);
  }
  printf("\n");
}

int reverse_array(int array[], int len)
{
  int tmp[len];
  for(int i=0; i<len; i++)
    tmp[i] = array[len -1 -i];

  for(int i=0; i<len; i++)
    array[i] = tmp[i];
}
