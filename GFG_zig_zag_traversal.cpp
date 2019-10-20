void zigZagTraversal(Node* root)
{
queue<Node*>q1,q2;
Node *cur;
if(root==NULL)return ;
cur=root;
q1.push(root);
q2.push(root);
stack<int>s;
 int cnt=0;
while(!q1.empty())
{
   while(!q2.empty())
   {
       
       cur=q2.front();
       if(cnt%2==0)cout<<cur->data<<" ";
       else
       {
           s.push(cur->data);
       }
       q2.pop();
       q1.pop();
       if(cur->left!=NULL)q1.push(cur->left);
       if(cur->right!=NULL)q1.push(cur->right);
   }
   //cout<<cnt
   if(cnt%2!=0)
   {
       while(!s.empty())
       {
           cout<<s.top()<<" ";
           s.pop();
       }
   }
   cnt++;
   q2=q1;
}
cout<<endl;
}