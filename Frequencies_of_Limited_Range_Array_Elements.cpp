#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0,a[1000000],h[1000000]={0},max=0; 
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	     cin>>a[i];
	     h[a[i]]+=1;
	     if(a[i]>max)max=a[i];
	 }
    for(i=1;i<=n;i++)
	 {
	    
	     cout<<h[i]<<" ";
	 }
	 cout<<endl;
}
	return 0;
}