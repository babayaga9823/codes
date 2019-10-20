#include <bits/stdc++.h>
using namespace std;
unsigned long int fact(unsigned long int n)
{
    unsigned long int z;
    if(n==0)return 1;
        if(n==1)return 1;
    else z=n*fact(n-1);
    return z;
}
int main() {
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
	{unsigned long int n;
	cin>>n;
	    unsigned long int z=fact(n);
	    cout<<z<<endl;
	}

return 0;	
}