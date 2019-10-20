#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
    int n,m,z,i,max=0,cnt=0,a[100000]={0},b[100000]={0},a1[100000],a2[100000]; 
cin>>n>>m;
for(i=0;i<n;i++)
{
    cin>>a1[i];
    a[a1[i]]+=1;
    if(a1[i]>max)max=a1[i];
}
for(i=0;i<m;i++)
{
    cin>>a2[i];
    b[a2[i]]+=1;
    if(a2[i]>max)max=a2[i];
}
int yo=0;
for(i=0;i<m;i++)
{
    z=a2[i];
    if(b[z]==a[z])yo++;
}
if(yo==m)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
	return 0;
}