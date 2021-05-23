int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0;
    Node*t1=head1;
    Node*t2=head2;
    while(t1!=NULL)
    {
        c1++;
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        c2++;
        t2=t2->next;
    }
    int d=abs(c1-c2);
    t1=head1;
    t2=head2;
    if(c1>c2)
    {
    for(int i=0;i<d;i++)
    {
        t1=t1->next;
    }
    }
    else
    {
       for(int i=0;i<d;i++)
    {
        t2=t2->next;
    } 
    }
    int x;
    while(t1&&t2)
    {
        if(t1==t2)
        {
        x=t1->data;
        break;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return x;// Your Code Here
}
