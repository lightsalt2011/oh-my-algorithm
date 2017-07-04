static struct list *get_mid(struct list **head)
{
  if (*head==NULL) {
    printf("error\n");
    return NULL;
  } else if ((*head)->next == NULL) {
    return (*head);
  }

  struct list *slow = *head;
  struct list *fast = (*head)->next;

  for (;fast != NULL && fast->next != NULL) {
    slow = slow->next;//one time 1 step
    fast = fast->next->next;//one time 2 step
  }

  return slow;
}

static int msort(struct list **a, struct list **b)
{

}

int merge_sort(struct list **head)
{

}
