class Solution
{
    public:
vector<int> largestValues(Node* root)
{
queue<Node*>q;
vector<int>v;

q.push(root);

if(root==NULL)
{
return v;
}

while(!q.empty())
{
int m=INT_MIN;
int size = q.size();
for(int i=1;i<=size;i++)
 {
     
  Node*temp=q.front();
  q.pop();
  
  m=max(m,temp->data);
  
 if(temp->left)
 {
  q.push(temp->left);
 }

 if(temp->right)
 {
  q.push(temp->right);
 }
 
}

 v.push_back(m);
 
 }
 //code here
return v;
}
};
