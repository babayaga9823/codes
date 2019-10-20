void addPolynomial(Node *p1, Node *p2)
{
  int pw1,pw2,max=0,i;
  pw1=p1->pow;
  pw2=p2->pow;
  max=pw1>pw2?pw1:pw2;
  Node *head=NULL,*cur,*curnew;
  for(i=max;i>=0;i--)
  {
      if(head==NULL)
      {
          curnew=new Node;
          head=curnew;
          curnew->pow=i;
          curnew->coeff=0;
      }
      else
      {
          cur=head;
          while(cur->next!=NULL)
          {
              cur=cur->next;
          }
          curnew=new Node;
          curnew->pow=i;
          curnew->coeff=0;
          cur->next=curnew;
      }
  }
  Node *cur1,*cur2;
  cur1=p1;
  while(cur1!=NULL)
  {
      cur=head;
      while(cur!=NULL&&cur->pow!=cur1->pow)
      {
           cur=cur->next;
      }
      if(cur->pow==cur1->pow)cur->coeff+=cur1->coeff;
      cur1=cur1->next;
  }
  cur1=p2;
  while(cur1!=NULL)
  {
      cur=head;
      while(cur!=NULL&&cur->pow!=cur1->pow)
      {
           cur=cur->next;
      }
      if(cur->pow==cur1->pow)cur->coeff+=cur1->coeff;
      cur1=cur1->next;
  }
 cur=head;
 int e=0;
      while(cur!=NULL)
      {
          if(cur->coeff!=0)
          {
              if(e==0)
              {
                   cout<<cur->coeff<<"x^"<<cur->pow;
                   e++;
              }
             else cout<<" + "<<cur->coeff<<"x^"<<cur->pow;
              
          }
          //if(cur->next!=NULL&&e!=0)cout<<"+";
           cur=cur->next;
      }

}