class Solution
{
    public:
    bool isValidBSTHelper(Node* root, long min, long max){
    if(root == NULL){
        return true;
    }
    if(root -> data > min && root -> data< max){
        bool temp1 = isValidBSTHelper(root->left, min, root->data);
        bool temp2 = isValidBSTHelper(root->right, root->data, max);
        return temp1 && temp2;
    }
    return false;
}
    bool isBST(Node* root) 
    {
      return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
       // Your code here
    }
};
