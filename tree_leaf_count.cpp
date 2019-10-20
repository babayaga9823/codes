int countLeaves(Node* root)
{
  Node *cur;
  cur=root;
  int l=0,r=0;
  if(cur->left!=NULL)l=countLeaves(cur->left);
  if(cur->right!=NULL)r=countLeaves(cur->right);
  if(cur->left==NULL&&cur->right==NULL)return 1;
  return l+r;
}
