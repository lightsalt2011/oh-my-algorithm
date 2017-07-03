/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself array library
*/
#include <stdio.h>
#include <stdlib.h>

int selection_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=1;
  int end=len - 1;

  if (array==NULL || len < 1) {
    printf("error\n");
    return -1;
  } else if (len == 1) {
    return 0;
  }

  for(i=start; i<=end; i++)
    for(j=i+1; j<=end; j++)
    {
      if(array[i] > array[j]) {
        tmp = array[i];
        array[i] = array[j];
        array[j]= tmp;
      }
    }
}

int insertion_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=3;
  int end=len - 1;

  if (array==NULL || len < 1) {
    printf("error\n");
    return -1;
  } else if (len == 1) {
    return 0;
  }

  //every time insert one member to a sorted array
  for(i=start + 1; i<=end; i++) {
    for(j=i; j > start;j--) {
      if(array[j] < array[j-1]) {
        tmp = array[j];
        array[j] = array[j-1];
        array[j-1] = tmp;
      } else {
        break;
      }
    }
  }
}

int bubble_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=2;
  int end=len - 1;

  if (array==NULL || len < 1) {
    printf("error\n");
    return -1;
  } else if (len == 1) {
    return 0;
  }

  for(i=start; i<end; i++) {
    for(j=start; j<end-i; j++) {
      if(array[j] > array[j+1]) {
        tmp = array[j];
        array[j] = array[j+1];
        array[j+1]= tmp;
      }
    }
  }
}

int shell_sort(int array[], int len)
{
  int i,j;
  int tmp;

  int group;
  for(group = len / 2; group > 0; group /= 2){
    for(i = group; i < len; i++){
      for(j = i - group; j>=0; j -= group){
        if(array[j] > array[j + group]){
          tmp = array[j];
          array[j] = array[j + group];
          array[j + group] = tmp;
        }
      }
    }
  }
}

