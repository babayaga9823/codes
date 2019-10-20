#include <bits/stdc++.h>
using namespace std;

int main() {
unsigned long  int t;
 cin>>t;
 while(t--)
{
	unsigned long int n,m,z,i,cnt=0,j; 
	cin>>n;
	for(i=1;i<=sqrt(n);i++)
    {
        for(j=0;j<=sqrt(n);j++)
        {
            z=pow(i,3)+pow(j,3);
            if(z==n)cnt++;
        }
    }	
	if(cnt==0)cout<<0<<endl;
	else cout<<cnt<<endl;
}
	return 0;
}