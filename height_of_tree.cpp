int height(Node* node)
{
    Node *cur=node;
    int hl=0,hr=0;
    if(cur->left!=NULL)hl=height(cur->left);
    if(cur->right!=NULL)hr=height(cur->right);
     return 1+max(hl,hr);
}