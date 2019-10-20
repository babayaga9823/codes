int finder(Node *root,int x)
{
    Node *cur;
    cur=root;
    int l=0,r=0;
    if(cur->data==x)return 1;
    if(cur->left!=NULL)l=finder(cur->left);
   if(cur->right!=NULL)r=finder(cur->right);
   if(cur->left==NULL&&cur->right==NULL)
   {
       if(cur->data==x)return 1;
       else 0;
   }
   if(l==1||r==1)return 1;
}