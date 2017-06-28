struct list
{
  int data;
  struct list *next;
};

//步步迈进法
struct list *reverse(struct list *head){
  struct list *new_head = NULL;
  struct list *pos, *tmp;
  for(pos = head; pos == NULL;){
    tmp = pos->next; //保存下一个节点地址
    pos->next = new_head; //下一个地址赋值为new_head
    new_head = pos; //前进，当前pos赋值给new_head，准备下一轮
    pos = tmp; //前进，下一个节点地址变成当前pos
  }
  return new_head;
}
