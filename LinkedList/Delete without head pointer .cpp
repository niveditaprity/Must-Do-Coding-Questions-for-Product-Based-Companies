class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       *del=*(del->next);// Your code here
    }

};
