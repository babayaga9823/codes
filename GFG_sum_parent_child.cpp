int isSumProperty(Node *node)
{

 int l=1,r=1,lval=0,rval=0;
 Node *cur;
 cur=node;
 if(cur->left!=NULL)
 {
     l=isSumProperty(cur->left);
        lval=cur->left->data;
 }
 if(cur->right!=NULL)
 {
     r=isSumProperty(cur->right);
         rval=cur->right->data;
}
 if(cur->left==NULL&&cur->right==NULL)return 1;
 if(l==1&&r==1&&lval+rval==cur->data)return 1;
 return 0;
}






