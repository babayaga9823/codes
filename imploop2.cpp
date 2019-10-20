while(current!=NULL)
 {prev=current;
     if(x<current->data)current=current->left;
     else if(x>current->data)current=current->right;
     if(x==current->data)
     {
         fond++;
         break;
     }
 }