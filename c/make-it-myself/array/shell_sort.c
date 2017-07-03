/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself array library
*/

#include <stdio.h>
#include <stdlib.h>


int shell_sort(int array[], int len)
{
  int i,j;
  int tmp;

  int group;
  for(group = len / 2; group > 0; group /= 2){
    for(i = group; i < len; i++){
      tmp = array[i];

      for(j = i; j>=group; j -= group){
        if(tmp < array[j - group]){
          array[j] = array[j - group];
        } else {
          break;
        }
      }

      array[j] = tmp;
    }
  }
}
