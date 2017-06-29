/*
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
  myself no head link list library
*/

struct list
{
  int value;
  struct list *next;
};

int create_list(struct list **head, int len);
int get_length(struct list *head);

void random_list(struct list *head);
void display_list(struct list *head);

int reverse_list(struct list **head);
int insert_node(struct list **head, int index, int data);
int delete_node(struct list **head, int index);
int delete_list(struct list **head);