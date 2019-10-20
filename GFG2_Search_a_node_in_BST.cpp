bool search(Node* root, int x)
{Node *current=root;
int l=0,r=0;
if(root==NULL)return NULL;
    if(x<current->data)l=search(current->left,x);
    else if(x>current->data)r=search(current->right,x);
    else if(current->data==x)
    {
        return 1;
    }
    return max(l,r);
}
