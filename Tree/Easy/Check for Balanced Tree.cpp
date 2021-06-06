nt height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}
bool isBalanced(Node *root)
{
    
    if(root==NULL)
    {
        return true;
    }
   return(isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->right)-height(root->left))<=1));//  Your Code here
}
