struct node* findIntersection(struct node* head1, struct node* head2)
{
   int max1=0,max2=0,h1[1000]={0},h2[1000]={0};
   node *cur=head1,*prev;
   while(cur!=NULL)
   {
       h1[cur->data]+=1;
       if(cur->data>max1)max1=cur->data;
       cur=cur->next;
      
   }
   cur=head2;
   while(cur!=NULL)
   {
       h2[cur->data]+=1;
       cur=cur->next;
      //if(cur->data>max2)max2=cur->data;
   }
   //if(z==max1)
   cur=head1;
   prev=cur;
   int cnt=0;
   for(int i=0;i<=max1;i++)
   {
       if(h1[i]>=1&&h2[i]>=1)
       {prev=cur;
           cur->data=i;
           cur=cur->next;
           cnt++;
       }
   }
   if(cnt==0)return NULL;
 prev->next=NULL;
 return head1;
}
