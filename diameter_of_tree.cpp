int maxh(Node *node,int &res)
{
    Node *cur=node;
    int l=0,r=0,curht=0;
    if(cur->left==NULL&&cur->right==NULL)return 1;
    if(cur->left!=NULL)l=maxh(cur->left,res);
    if(cur->right!=NULL)r=maxh(cur->right,res);
    curht=max(l,r)+1;
    res=max(res,l+r+1);
    return curht;
}
int diameter(Node* node)
{
   int res=INT_MIN;
   maxh(node,res);
   return res;
}
