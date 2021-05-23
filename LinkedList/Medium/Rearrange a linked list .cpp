class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
      Node*odd=head;
      Node*even=head->next;
     Node*feven=head->next;
      while(odd->next!=NULL&&even->next!=NULL)
      {
          odd->next=even->next;
          odd=even->next;
          if(even->next!=NULL)
          {
          even->next=odd->next;
          even=odd->next;
          }
          else
          {
              even->next=NULL;
          }
      }
      odd->next=feven;
      
      // Your Code here
    }
};
