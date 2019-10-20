#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }
    if(val < (*tree)->data)
    { insert(&(*tree)->left, val);}
    else if(val > (*tree)->data)
    { insert(&(*tree)->right, val);}
}
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * deleteNode(Node *root,  int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);}
        int r;
        cin>>r;
        root = deleteNode(root,r);
        inorder(root);
        cout<<endl;
    }
}

/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; 
*/
Node *deleteNode(Node *root,  int x)
{
 Node *current=root,*prev=root;
 if(current==NULL)return NULL;
 int fond=0;
 while(current!=NULL)
 {prev=current;
     if(x<current->data)current=current->left;
     else if(x>current->data)current=current->right;
     if(x==current->data)
     {
         fond++;
         break;
     }
 }
 Node *curnext,*prevnext;
 if(fond==0)return root;
 if(current!=root)
 {
     if(current->left==NULL)//left doesnt exists and something may be +nt in right
 {
     //if(current->data<prev->data)prev->left=NULL;
     //else prev->right=NULL;
     //if(current==head)return root=current->right;
       if(current->data<prev->data)prev->left=current->right;
     else if(current->data>prev->data)prev->right=current->right;
     
 }
 else if(current->left!=NULL&&current->left->right==NULL)//left not null and right null
 {
      curnext=current->left;
      curnext->right=current->right;
     if(current->data<prev->data)prev->left=curnext;
     else if(current->data>prev->data)prev->right=curnext;
 }
 else if(current->left!=NULL&&current->left->right!=NULL)//left not null and right not null
 {
     curnext=current->left;
     prevnext=curnext;
     while(curnext->right!=NULL)
     {prevnext=curnext;
         curnext=curnext->right;
     }
     Node *resrv;
     resrv=curnext;
     prevnext->right=curnext->left;
     resrv->left=current->left;
     resrv->right=current->right;
     if(current->data<prev->data)prev->left=resrv;
     else if(current->data>prev->data)prev->right=resrv;
 }
 }
 else//for root node
 {
     if(current->left==NULL)//left doesnt exists and something may be +nt in right
 {
     //if(current->data<prev->data)prev->left=NULL;
     //else prev->right=NULL;
     if(current==root)return root=current->right;
     
 }
 else if(current->left!=NULL&&current->left->right==NULL)//left not null and right null
 {
      curnext=current->left;
      curnext->right=current->right;
      root=curnext;
      
 }
 else if(current->left!=NULL&&current->left->right!=NULL)//left not null and right not null
 {
     curnext=current->left;
     prevnext=curnext;
     while(curnext->right!=NULL)
     {prevnext=curnext;
         curnext=curnext->right;
     }
     Node *resrv;
     resrv=curnext;
     prevnext->right=curnext->left;
     resrv->left=current->left;
     resrv->right=current->right;
     root=resrv;
 }
 }
 
return root; 
 
}
