struct Node* partition(struct Node* head, int x) {
   struct Node*s=new Node(0);
   struct Node*e=new Node(0);
    struct Node*g=new Node(0);
    struct Node*sp=s,*ep=e,*gp=g;
    struct Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data<x)
        {
            sp->next=temp;
            sp=sp->next;
        }
        else if(temp->data==x)
        {
            ep->next=temp;
            ep=ep->next;
        }
        else
        {
            gp->next=temp;
        gp=gp->next;
        
        }
        temp=temp->next;
    }
    if(e->next!=NULL)
    {
    sp->next=e->next;
    ep->next=g->next;
    gp->next=NULL;
    }
    else
    {
        sp->next=g->next;
        gp->next=NULL;
    }
    return s->next;// code here
}
