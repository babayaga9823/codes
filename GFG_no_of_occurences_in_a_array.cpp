#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 

cin>>n>>m;
int a[n],h[m+1]={0};
for(i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]==m)h[m]+=1;
    
}
if(h[m]==0)cout<<-1<<endl;
else cout<<h[m]<<endl;
}
	return 0;
}