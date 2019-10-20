#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,cnt=0,min=INT_MIN; 
cin>>n>>m;
i=0;
int a[n],indx=0;
while(i<n)
{
    cin>>a[i];
    if(a[i]<=m&&a[i]>min)
    {
        min=a[i];
        indx=i;
    }
    i++;
}
if(min==INT_MIN)cout<<-1<<endl;
else cout<<indx<<endl;
}
	return 0;
}