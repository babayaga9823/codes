int sumOfLeafNodes(Node *ro )
{
    Node *current=ro;
    int l=0,r=0,cnt=0;
if(current->left!=NULL)l=sumOfLeafNodes(current->left);    
if(current->right!=NULL)r=sumOfLeafNodes(current->right);
if(current->left==NULL&&current->right==NULL)
{
    cnt=cnt+current->data;
}
return cnt+l+r;
}