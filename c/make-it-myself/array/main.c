/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head linked list library
*/

#include <stdio.h>
#include "array.h"

int main()
{
  int len = 25;
  int my_array[len];

  random_array(my_array, len);
  display_array(my_array, len);

  printf("reverse array\n");
  reverse_array(my_array, len);
  display_array(my_array, len);

  printf("selection sort\n");
  selection_sort(my_array, len);
  display_array(my_array, len);


  printf("bubble sort\n");
  random_array(my_array, len);
  display_array(my_array, len);
  bubble_sort(my_array, len);
  display_array(my_array, len);

  printf("insertion sort\n");
  random_array(my_array, len);
  display_array(my_array, len);
  insertion_sort(my_array, len);
  display_array(my_array, len);

  printf("quick sort\n");
  random_array(my_array, len);
  display_array(my_array, len);
  quick_sort(my_array, len);
  display_array(my_array, len);
}
