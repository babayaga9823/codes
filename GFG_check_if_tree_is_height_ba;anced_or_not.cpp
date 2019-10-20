int height(Node *root)
{
    int l=0,r=0;
    if(root==NULL)return 0;
    Node *cur;
    cur=root;
    if(cur->left!=NULL)l=height(cur->left);
    if(cur->right!=NULL)r=height(cur->right);
   return max(l,r)+1;
}
bool isBalanced(Node *root)
{
    Node *cur=root;
    if(root==NULL)return 1;
    int l=1,r=1,lh=0,rh=0;
    if(cur->left!=NULL)
    {
        l=isBalanced(cur->left);
        lh=height(cur->left);
    }
    if(cur->right!=NULL)
    {
        r=isBalanced(cur->right);
        rh=height(cur->right);
    }
    if(cur->left==NULL&&cur->right==NULL)return 1;
    if(l==1&&r==1&&(abs(lh-rh)==1||abs(lh-rh)==0))return 1;
    return 0;
}
