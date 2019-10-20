#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *left=NULL;
    struct node *right=NULL;
}*root=NULL;

void inorder(struct node *root)
{struct node *current=root;
    if(current->left!=NULL)inorder(current->left);
    cout<<current->val<<" ";
    if(current->right!=NULL)inorder(current->right);
}

void preorder(struct node *root)
{struct node *current=root;
     cout<<current->val<<" ";
    if(current->left!=NULL)preorder(current->left);
    if(current->right!=NULL)preorder(current->right);
}

struct node* createBST(queue<int>v) 
{
    struct node *current,*newnode,*prev;
     if(root==NULL)
    {
        newnode=new struct node;
        root=newnode;
        current=root;
        newnode->val=v.front();
        //cout<<"node created "<<v.front()<<endl;(was used by me for debugging)
        v.pop();
    }
    while(!v.empty())
    {
     int z;
        z=v.front();
        v.pop();
        int j;
        current=root;
        while(current!=NULL)
        {       
            prev=current;
              if(z<current->val) current=current->left;
              else if(z>current->val) current=current->right;
        }
    current=prev;
    if(z<current->val)
    {
         current->left=new struct node;
         current=current->left;
        // cout<<"node created l "<<z<<endl;(was used by me for debugging)
            current->val=z;
    }
    else
    {
         current->right=new struct node;
          current=current->right;
          // cout<<"node created r "<<z<<endl;(was used by me for debugging)
            current->val=z;
    }
    }
return root;        
      
}
struct node* insert(struct node*,int z) 
{struct node *current,*newnode,*prev;
      if(root==NULL)
    {
        newnode=new struct node;
        root=newnode;
        current=root;
        newnode->val=z;
        //cout<<"node created "<<v.front()<<endl;(was used by me for debugging)
    }
    else
    {
       current=root;
        while(current!=NULL)
        {       
            prev=current;
              if(z<current->val) current=current->left;
              else if(z>current->val) current=current->right;
        }
    current=prev;
    if(z<current->val)
    { cout<<z<<" is Inserted at left of "<<current->val;
         current->left=new struct node;
         current=current->left;
        // cout<<"node created l "<<z<<endl;(was used by me for debugging)
            current->val=z;
    }
    else
    {cout<<z<<" is Inserted at right of "<<current->val;
         current->right=new struct node;
          current=current->right;
          // cout<<"node created r "<<z<<endl;(was used by me for debugging)
            current->val=z;
    } 
    }
return root;
}
int height(struct node *root)
{
    struct node *current=root;
    int retl=0,retr=0,fet=0;
    if(current->left!=NULL)retl=1+height(current->left);
    if(current->right!=NULL)retr=1+height(current->right);
    if(current->left==NULL&&current->right==NULL)
    {
        return 0;
    }
    return fet=retl>retr?retl:retr;
}


int leafcnt(struct node *root)
{
    struct node *current=root;
    int leaf=0;
    if(current->left!=NULL)leaf=leaf+leafcnt(current->left);
    if(current->right!=NULL)leaf=leaf+leafcnt(current->right);
    if(current->left==NULL&&current->right==NULL)
    {
        return 1+leaf;
    }
    return leaf;
}

int degreetwo(struct node *root)
{
    struct node *current=root;
    int leaf=0;
    static int degree=0;
    if(current->left!=NULL&&current->right!=NULL)degree++;
    if(current->left!=NULL)leaf=degreetwo(current->left);
    if(current->right!=NULL)leaf=degreetwo(current->right);
    if(current->left==NULL&&current->right==NULL)
    {
        return leaf;
    }
    return degree;
}
int main() 
{
int n,i;
cout<<"Enter size of BST : ";
cin>>n;
cout<<endl;
queue<int>v;
cout<<"Enter the elements of BST : ";
for(i=0;i<n;i++)
{
    int z;
    cin>>z;
    v.push(z);
}
 struct node *root=createBST(v);
 cout<<endl;
 cout<<"Inoder traversal : ";
 inorder(root);
 cout<<endl;
 cout<<"Preoder traversal : ";
 preorder(root);
 cout<<endl;
 insert(root,19);//just use a loop here if u want to create of up to ur wish 
  insert(root,23);
   root=insert(root,24);
 root=insert(root,18);
  int h=height(root);
  cout<<"\n Height of BST = "<<h<<endl;

 int lf=leafcnt(root);
 cout<<"\n Leaf of BST = "<<lf<<endl;
 int dg=degreetwo(root);
 cout<<" Number of node with degree two "<<dg<<endl;
 cout<<"Inoder traversal : ";
 inorder(root);
 cout<<endl;
 cout<<"Preoder traversal : ";
 preorder(root);
	return 0;
}