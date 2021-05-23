class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node*split(Node*head)
    {
        Node*fp=head,*sp=head;
        while(fp->next&&fp->next->next)
        {
            sp=sp->next;
            fp=fp->next->next;
        }
        Node*temp=sp->next;
        sp->next=NULL;
        return temp;
    }
    Node* merge(Node*l1,Node*l2)
    {
        Node*temp=NULL;
        if(l1==NULL)
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
        else if(l1->data<=l2->data)
        {
            temp=l1;
            temp->next=merge(l1->next,l2);
        }
        else
        {
           temp=l2;
           temp->next=merge(l1,l2->next);
        }
        return temp;
        
    }
    Node* mergeSort(Node* head) {
       if (!head || !head->next)  
        return head;  
    Node *second = split(head);  
  
    // Recur for left and right halves  
    head = mergeSort(head);  
    second = mergeSort(second);  
  
    // Merge the two sorted halves  
    return merge(head,second);
    }

};
