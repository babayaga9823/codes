int maxi(struct Node *root,int &res)
{
Node *cur=root;
int l=0,r=0;
if(cur->left!=NULL)
{
    l=maxi(cur->left,res);
}
if(cur->right!=NULL)
{
    r=maxi(cur->right,res);
}
if(cur->left==NULL&&cur->right==NULL)
{
    return cur->data;
}
int k=max(max(l,r)+cur->data,cur->data);
int maxim=max(k,l+r+cur->data);
res=max(res,maxim);
return k;
}
int maxPathSum(struct Node *root)
{
    int res=INT_MIN;
     maxi(root,res);
     return res;
}
