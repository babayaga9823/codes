/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
int c=0,a[1010];
void inOrder(Node *root) {

      Node *current;
      current = root;

      if (current->left != NULL) {
        inOrder(current->left);
      }
    a[c]=current->data;
    c++;
      //cout << current->data << " ";
      if (current->right != NULL) {
        inOrder(current->right);
      }
      
    }

	    bool checkBST(Node* root) 
    {
        inOrder(root);
    for(int i=0;i<c-1;i++)        
    {
        for(int j=0;j<c-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                
            }
            else{
                return 0;
            }
        }
    }
        return 1;    
    }  
        
    