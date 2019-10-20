int findMaxForN(Node* root, int x,int size)
{
    Node *current=root;
    int max=-99;
    if(root==NULL)return -1;
    while(current!=NULL)
    {
        if(current->key<x)
        {   
           if(current->key>max)max=current->key;
           current=current->right;
        }
        else if(current->key>x)
        {   
           if(current->key>max&&current->key<x)max=current->key;
           current=current->left;
        }
        else if(current->key==x)return x;
        else break;//this part also can be deleted no need of this else part
    }
    if(max==-99)return -1;
    else return max;
}