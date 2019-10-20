void levelOrder(Node* node)
{
  queue<Node *>q1,q2;
  Node *cur;
 q1.push(node);
 q2.push(node);
  while(!q1.empty())
  {
      while(!q2.empty())
      {
          cur=q2.front();
          q2.pop();
          q1.pop();
          cout<<cur->data;
          if(!q2.empty())cout<<" ";
          if(cur->left!=NULL)q1.push(cur->left);
          if(cur->right!=NULL)q1.push(cur->right);
      }
      cout<<" $ ";
      q2=q1;
  }
}
