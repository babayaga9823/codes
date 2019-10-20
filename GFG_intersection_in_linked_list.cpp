int intersectPoint(Node* head1, Node* head2)
{
Node *s[202];
int cnt=0,i;
Node *cur=head1;
while(cur!=NULL)
{
   
    s[cnt++]=cur;
    cur=cur->next;
}
cur=head2;
while(cur!=NULL)
{
    i=0;
    while(i<cnt)
    {
        
        if(cur==s[i])return cur->data;
        i++;
    }
    cur=cur->next;
}
return -1;
}
