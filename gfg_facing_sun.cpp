#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0,max=0; 
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>max)
    {
        max=a[i];cnt++; 
    }
    
}
cout<<cnt<<endl;
}
	return 0;
}