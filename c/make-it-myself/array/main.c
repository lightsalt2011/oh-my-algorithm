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

  printf("Now reverse array\n");
  reverse_array(my_array, len);
  display_array(my_array, len);

  printf("Now selection array\n");
  selection_sort(my_array, len);
  display_array(my_array, len);


  printf("Now bubble array\n");
  random_array(my_array, len);
  display_array(my_array, len);
  bubble_sort(my_array, len);
  display_array(my_array, len);

  printf("Now insertion array\n");
  random_array(my_array, len);
  display_array(my_array, len);
  insertion_sort(my_array, len);
  display_array(my_array, len);
}
