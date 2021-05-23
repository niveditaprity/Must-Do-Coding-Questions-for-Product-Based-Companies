class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
      int c=0;
      Node*temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
        
      }
      temp->next=head;
      Node*end;
          while(k--)
          {
              end=head;
              head=head->next;
          }
          end->next=NULL;
          return head;
          // Your code here
    }
};
    
