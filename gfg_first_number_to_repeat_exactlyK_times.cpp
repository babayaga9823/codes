#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
int n,m,z,i,cnt=0,max=0,k,fond=0; 
cin>>n>>k;
int a[n],h[1000000]={0};
for(i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]>max)max=a[i];
  h[a[i]]+=1;
}
for(i=0;i<n;i++)
{
    z=a[i];
  if(h[z]==k)
  {
      cout<<z<<endl;
      fond++;
      break;
  }
}
if(fond==0) cout<<-1<<endl;
}
  return 0;
}