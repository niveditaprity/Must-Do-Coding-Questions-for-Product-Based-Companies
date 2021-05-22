class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        struct Node*prev=NULL;
        struct Node*Next=NULL;
        struct Node*toNext=head;
        while(toNext!=NULL)
        {
            Next=toNext->next;
            toNext->next=prev;
            prev=toNext;
            toNext=Next;
        }
        return prev;// return head of reversed list
    }
    
