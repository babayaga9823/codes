/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
/* Computes the height of binary tree with given root.  */
int height(Node* head)
{
   int l=1,r=1,h=0;
   //const Node *n=head;
   Node *current;
   current=head;
  if(current->left!=NULL)l=1+height(current->left);
  else if(current->right!=NULL)r=1+height(current->right);
  return h=max(l,r);
}
