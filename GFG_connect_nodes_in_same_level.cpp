void connect(Node *p)
{
   Node *cur;
   queue<Node *>q1,q2;
   q1.push(p);
   q2.push(p);
   while(!q1.empty())
   {
       while(!q2.empty())
       {
           cur=q2.front();
           q2.pop();
           q1.pop();
           if(q2.empty())cur->nextRight=NULL;
           else cur->nextRight=q2.front();
           if(cur->left!=NULL)q1.push(cur->left);
           if(cur->right!=NULL)q1.push(cur->right);
       }
       q2=q1;
   }
}
