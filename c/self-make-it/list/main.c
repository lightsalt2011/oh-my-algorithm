/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head link list library test program
*/

#include <stdio.h>
#include "list.h"

int main()
{
  struct list *my_list;
  int len = 25;

  create_list(&my_list, len);
  random_list(my_list);
  display_list(my_list);

  printf("\nnow insert\n");
  insert_node(&my_list, 1, 50);
  display_list(my_list);

  printf("\nnow reverse this list\n");
  reverse_list(&my_list);
  display_list(my_list);

  printf("\nnow delete 5 node\n");
  delete_node(&my_list, get_length(my_list));
  display_list(my_list);

  delete_list(&my_list);
  display_list(my_list);
}
