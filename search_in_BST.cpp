bool search(Node* root, int x)
{
    bool l=false,r=false;
    Node *cur=root;
    if(cur->data==x)return 1;
    if(cur->left!=NULL)l=search(cur->left,x);
    if(cur->right!=NULL)r=search(cur->right,x);
    if(l==true||r==true)return true;
    else return false;
}