int getMiddle(Node *head)
{
  Node*temp=head;
  Node*ptr=head;
  if(head==NULL)
  {
      return -1;
  }
  while(ptr!=NULL&&ptr->next!=NULL)
  {
      ptr=ptr->next->next;
      temp=temp->next;
  }
  return temp->data;// Your code here
}
