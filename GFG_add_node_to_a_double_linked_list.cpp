void addNode(Node *head, int pos, int data)
{
   Node *cur,*curnew;
   cur=head;
   if(pos==0)
   {
      curnew=new Node(data);
      curnew->next=head->next;
      curnew->prev=head;
      head->next=curnew;
      head->next->prev=curnew;
   }
   else
   {
       int i=0;
   while(cur!=NULL&&i<pos)
   {
       cur=cur->next;
       i++;
   }
  curnew=new Node(data);
    curnew->next=cur->next;
    curnew->prev=cur;
    if(cur->next!=NULL)cur->next->prev=curnew;
    cur->next=curnew;
    
   }
   
}