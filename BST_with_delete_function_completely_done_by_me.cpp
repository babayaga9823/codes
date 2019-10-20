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
    { cout<<z<<" is Inserted at left of "<<current->val<<endl;
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

struct node* deleted(struct node* root,int z)
{
    struct node *current;
    if(root==NULL)
    {
        cout<<"Nothing to delete"<<endl;
        return NULL;
    }
    else
    {
        int found=0;
        current=root;
         struct node *prev;
         stack<struct node *>stk;
        while(found==0&&current!=NULL)
        {  
                if(current->val==z)
                {
                    found++;
                   // cout<<"element pushed "<<current->val<<endl;
                stk.push(current);
                }
           else if(z<current->val)
           {    
               //cout<<"element pushed "<<current->val<<endl;
               stk.push(current);
               current=current->left;
           }
           else if(z>current->val)
           {
              // cout<<"element pushed "<<current->val<<endl;
               stk.push(current);
               current=current->right;
           }
        }
      
        stk.pop();//to get the prev
      //  cout<<stk.top()->val<<" ** "<<endl;
        if(found!=0)
        {
            cout<<"\nElement is present in BST and it can be deleted : "<<endl;
           // cout<<"OK"<<endl;
           if(current==root)prev=NULL;
            else prev=stk.top();
            
            //cout<<"OK"<<endl;
            struct node *swapmark=current,*delswap,*prevswap;
            stack<struct node *>st;
            st.push(current);
            int flag=0;
            swapmark=swapmark->left;
             st.push(swapmark);
             //cout<<"OK"<<endl;
             while(swapmark!=NULL)
             {
             swapmark=swapmark->right;
             st.push(swapmark);
             flag++;
             }
            st.pop();
            //cout<<"OK"<<endl;
            delswap=st.top();
            st.pop();
            if(st.empty())prevswap=NULL;
            else prevswap=st.top();
            if(current==root)//if deletion is from root node
            {//cout<<"+*****entering here\n";
                if(current->left==NULL)root=current->right;//if root is deleted and no left sub tree
                else if(flag==1)
                {
                    delswap->right=current->right;
                    root=delswap;
                }
                else
                {
                    prevswap->right=delswap->left;
                    delswap->left=current->left;
                    delswap->right=current->right;
                    root=delswap;
                }
            }
            else if(flag==0&&current!=root)
            {//cout<<"---------entering here\n";
               if(current->val<prev->val)
               {
                   prev->left=current->left;
               }
               else
               {
                   prev->right=current->right;
               }
            }
            else aif(flag==1&&current!=root)//here right is zero and left not null
            {
               // cout<<"+++++++++entering here\n";
                if(current->val<prev->val)
                {
                    delswap->right=current->right;//to copy the right child
                    prev->left=delswap;
                }
                else
                {
                   delswap->right=current->right;
                   prev->right=delswap;
                }
            }
            else
            {
                prevswap->right=delswap->left;//to copy the left sub tree of delswap
                delswap->left=current->left;
                delswap->right=current->right;
                if(current->val<prev->val)
                {
                    prev->left=delswap;
                }
                else
                {
                      prev->right=delswap;
                }
                
            }
            cout<<" Deleted sucessfully "<<current->val<<" "<<endl;
        }
        else{
            cout<<"Element is not present in BST and it cannot be deleted "<<endl;
        }
        
    }
    return root;
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
 //root=insert(root,19);
// root=insert(root,23);
/// root=insert(root,24);
 //root=insert(root,18);
 //cout<<endl;
 root=deleted(root,14);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
 root=deleted(root,34);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
 root=deleted(root,28);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
root=deleted(root,13);
 root=deleted(root,16);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
 root=deleted(root,33);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
  root=deleted(root,47);
 cout<<"\nInoder traversal : ";
 inorder(root);
 cout<<"\nPreoder traversal : ";
 preorder(root);
    return 0;
}