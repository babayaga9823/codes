#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
	{
	   unsigned long int n,z,r=0,cnt=0;
	    cin>>n;
	    z=n;
	    while(z!=0)
	    {
	       r+=z%10*pow(2,cnt);
	       z=z/10;
	       cnt++;
	    }
	    cout<<r<<endl;
	}
	return 0;
}