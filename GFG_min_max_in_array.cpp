#include <bits/stdc++.h>
using namespace std;

int main() 
{
unsigned long  int t;
 cin>>t;
 while(t--)
{
	int n,m,z,i,cnt=0,min=INT_MAX,max=0; 
	cin>>n;
	i=n;
	while(i--)
	{
	    cin>>z;
	    //v.push_back(z);
	    if(z<min)min=z;
	    if(z>max)max=z;
	}
	cout<<min<<" "<<max<<endl;
	
}
	return 0;
}