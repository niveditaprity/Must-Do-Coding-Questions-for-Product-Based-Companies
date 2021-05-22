Node* addTwoLists(Node* first, Node* second) {
    if(first==NULL)
    {
        return second;
    }
    if(second==NULL)
    {
        return first;
    }
    int sum=first->data+second->data;
    Node*p = new Node(sum%10);
    p->next=addTwoLists(first->next,second->next);
    if(sum>=10)
    {
      p->next=addTwoLists(p->next,new Node(1)); 
    }
    return p;
    // Code here
}
