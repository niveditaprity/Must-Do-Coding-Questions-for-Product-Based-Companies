Node* sortedMerge(Node* head1, Node* head2)  
{ 
    Node*temp=new Node(-1);
    Node*head=temp;
    if(head1==NULL)
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data>head2->data)
        {
            temp->next=head2;
            head2=head2->next;
        }
        else
        {
            temp->next=head1;
            head1=head1->next;
        }
        temp=temp->next;
    }
    if(head1!=NULL)
    {
        temp->next=head1;
    }
    if(head2!=NULL)
    {
        temp->next=head2;
    }
    return head->next;// code here
}  
