#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    Node *insert(Node *root, int val) {
      Node *current, *form;
      current = root;
      if (current == NULL) {
        form = new Node(val);
        root = form;
        return root;
      } else {

        while (current != NULL) {
          if (val < current->data) {
            if (current->left != NULL)
              current = current->left;
            else {
              break;
            }
          } else {
            if (current->right != NULL)
              current = current->right;
            else {
              break;
            }
          }

        } // while end
        if (val < current->data) {

          form = new Node(val);
          current->left = form;
          
        }
        if (val > current->data) {
          form = new Node(val);
          current->right = form;
    
        }
      }
      return root;
    }
};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}
