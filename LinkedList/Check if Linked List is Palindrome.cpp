class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
      stack<int>s;
      Node*temp=head;
      while(temp!=NULL)
      {
          s.push(temp->data);
          temp=temp->next;
      }
      while(head!=NULL)
      {
          if(head->data!=s.top())
          {
              return false;
          }
          head=head->next;
          s.pop();
      }
      return true;//Your code here
    }
};
