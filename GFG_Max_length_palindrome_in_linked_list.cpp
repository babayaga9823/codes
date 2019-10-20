int maxPalindrome(Node *head)
{
  Node *cur;
  cur=head;
  char a[101];
  int cnt=0;
  while(cur!=NULL)
  {
      a[cnt++]=(cur->data)+48;
      cur=cur->next;
  }
  a[cnt]='\0';
  int j=0,k,l=0,mark=0,max=0,i;
  for(i=0;i<cnt;i++)
  {
      for(j=i+1;j<cnt;j++)
      {
          if(a[i]==a[j])
          {//cout<<"Entered"<<i<<" "<<j<<endl;
              l=j-i+1;
            k=0;
            mark=0;
              while(k<l/2)
              {
                  if(a[i+k]==a[j-k])mark++;
                  k++;
                 
              }
              if(mark==l/2)
              {
                  if(l>max)max=l;
              }
          }
      }
  }
 if(max!=0) return max;
 else return 1;
}