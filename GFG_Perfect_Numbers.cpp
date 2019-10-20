#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long int t;
	cin>>t;
	
	for(unsigned long int  l=0;l<t;l++)
	{
	unsigned long int n,i,cnt=0;
	 cin>>n;
	 for(i=1;i<=sqrt(n);i++)
	 {
	     if(n%i==0)cnt=cnt+i+n/i;
	    else continue;   
	 }
	 cnt=cnt-n;
	 if(cnt==n)cout<<1<<endl;
	 else cout<<0<<endl;
	}
	

    return 0;
}
