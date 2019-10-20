#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
int n,m,z,i,j,max=0,cnt=0; 
cin>>n;
int a[n]={0},h[10001]={0};
for(i=0;i<n;i++)
{
    cin>>a[i];
    h[a[i]]=1;
}
cin>>m;
if(m==0)
{
    int h2[10001]={0};
for(i=0;i<n;i++)
{
h2[a[i]]+=1;
}

for(i=0;i<n;i++)
{
  h2[a[i]]-=1;
  j=a[i]-m;
  if(j>=0)
  {
      if(h2[j]==1)
      {
          cnt++;
          h2[ja]=0;
      }
  }
}


}
else
{
for(i=0;i<n;i++)
{
  //h[a[i]]-=1;
  j=a[i]-m;
  if(j>=0)
  {
      if(h[j]==1)
      {
          cnt++;
          h[j]=0;
      }
  }
}
}


cout<<cnt<<endl;
}
	return 0;
}