void removeTheLoop(Node *head)
{
   set<Node*>s;
   Node *cur,*sav,*prev;
   cur=head;
   if(head==NULL)return ;
   int fond=0;
   while(cur!=NULL)
   {
       if(s.find(cur)==s.end())s.insert(cur);
       else
       {
           sav=cur;
           fond++;
           break;
       }
       cur=cur->next;
   }
   if(fond!=0)
   {
       cur=sav->next;
       prev=cur;
   while(cur!=sav)
   {
       prev=cur;
       cur=cur->next;
   }
   prev->next=NULL;
   }
   return ;
}
