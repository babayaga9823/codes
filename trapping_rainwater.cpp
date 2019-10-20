#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,maxi=0,cnt=0; 
cin>>n;
int a[n],l[n],r[n];
for(i=0;i<n;i++)cin>>a[i];
for(i=0;i<n;i++)
{
    if(a[i]>maxi)maxi=a[i];
    l[i]=maxi;
}
maxi=0;
for(i=n-1;i>=0;i--)
{
    if(a[i]>maxi)maxi=a[i];
    r[i]=maxi;
}
for(i=0;i<n;i++)cnt+=(min(l[i],r[i])-a[i]);
cout<<cnt<<endl;

}
	return 0;
}