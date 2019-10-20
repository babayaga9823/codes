Node *rearrangeEvenOdd(Node *head)
{
   Node *cur=head;
   int vo[100],ve[100],cnto=0,cnte=0,cnt=1;
   while(cur!=NULL)
   {
       if(cnt%2==0)
       {
           ve[cnte++]=cur->data;
       }
       else
       {
           vo[cnto++]=cur->data;
       }
       cnt++;
       cur=cur->next;
   }
cur=head;
   int i=0;
       while(i<cnto)
       {
           cur->data=vo[i];
           i++;
           cur=cur->next;
       }
       i=0;
       while(i<cnte)
       {
           cur->data=ve[i];
           i++;
           cur=cur->next;
       }
       return head;
}