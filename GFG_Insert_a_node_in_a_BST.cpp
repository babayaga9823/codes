{
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
Node* insert(Node* node, int data);
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
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
            root = insert(root, k);
        }
        inorder(root);
        cout<<endl;
}
}

}
/*This is a function problem.You only need to complete the function given below*/
/* The structure of a BST node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */
/* This function should insert a new node with 
  given data and return root of the modified tree  */
Node* insert(Node* head, int x)
{
    Node *current=head,*prev=head;
    if(current==NULL)
    {
         Node *newly=new Node(x);
         head=newly;
         return head;
    }
    while(current!=NULL)
    {prev=current;
        if(x<current->data)current=current->left;
        else if(x>current->data)current=current->right;
        else if(x==current->data)return head;
    }
    current=prev;
    if(x<current->data)
    {
        Node *newly=new Node(x);
        current->left=newly;
    }
    else
    {
         Node *newly=new Node(x);
        current->right=newly;
    }
    return head;
}
