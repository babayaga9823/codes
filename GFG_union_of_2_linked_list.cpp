struct node* makeUnion(struct node* head1, struct node* head2)
{
   set<int>s;
   node *cur,*prev;
   cur=head1;
   while(cur!=NULL)
   {    prev=cur;
       s.insert(cur->data);
       cur=cur->next;
   }
   cur=head2;
   while(cur!=NULL)
   {
       s.insert(cur->data);
       cur=cur->next;
   }
    prev->next=head2;
    cur=head1;
    for(auto it=s.begin();it!=s.end();it++)
    {prev=cur;
        cur->data=(*it);
        cur=cur->next;
    }
   prev->next=NULL;
   return head1;
}
