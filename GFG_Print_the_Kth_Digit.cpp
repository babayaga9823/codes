#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
	{
	   unsigned long int a,b,k,z,r=0,p=0;
	   cin>>a>>b>>k;
	   r=pow(a,b);
	   z=r;
	   while(z!=0&&k!=0)
	   {
	       p=z%10;
	       z=z/10;
	       k--;
	   }
	  cout<<p<<endl; 
	}
return 0;	
}