/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head linked list library
*/

#include <stdio.h>
#include <time.h>
#include "array.h"


int main()
{
  int len = 50;
  int loop = 1000000;
  int i = 0;

  int my_array[len];

  time_t begin;
  time_t end ;

  random_array(my_array, len);
  display_array(my_array, len);
  printf("reverse array\n");
  reverse_array(my_array, len);
  display_array(my_array, len);
  printf("\n");

  printf("random array\n");
  begin = clock();
  for(i=0; i<loop; i++) {
    random_array(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %5.2f\n\n", difftime(end,begin));

  printf("bubble sort\n");
  begin = clock();
  for(i=0; i<loop; i++) {
    random_array(my_array, len);
    bubble_sort(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %.2f\n\n", difftime(end,begin));

  printf("selection sort\n");
  begin = clock();
  for(i=0; i<loop; i++){
    random_array(my_array, len);
    selection_sort(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %.2f\n\n", difftime(end,begin));


  printf("insertion sort\n");
  begin = clock();
  for(i=0; i<loop; i++){
    random_array(my_array, len);
    insertion_sort(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %.2f\n\n", difftime(end,begin));

  printf("shell sort\n");
  begin = clock();
  for(i=0; i<loop; i++){
    random_array(my_array, len);
    shell_sort(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %.2f\n\n", difftime(end,begin));

  printf("quick sort\n");
  begin = clock();
  for(i=0; i<loop; i++){
    random_array(my_array, len);
    quick_sort(my_array, len);
  }
  end = clock();
  display_array(my_array, len);
  printf("time is %.2f\n\n", difftime(end,begin));
}
