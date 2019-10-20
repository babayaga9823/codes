#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
	{
	    unsigned long int  n,z,r=0,p=0;
	    cin>>n;
	    z=n;
	    while(z!=0)
	    {
	        r=r+(z%10);
	        z=z/10;
	    }
	    z=r;
	     while(z!=0)
	    {
	        p=p*10+(z%10);
	        z=z/10;
	    }
	    if(r==p)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	   
	}
	return 0;
}