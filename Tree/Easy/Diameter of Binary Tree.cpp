class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
int height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}
    int diameter(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lt=height(root->left);
        int rt=height(root->right);
        int dl=diameter(root->left);
        int dr = diameter(root->right);
        int fd= max(lt+rt+1,max(dl,dr));
        return fd;// Your code here
    }

};
