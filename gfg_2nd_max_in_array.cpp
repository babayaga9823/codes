#include <bits/stdc++.h>
using namespace std;

int main() 
{
unsigned long  int t;
 cin>>t;
 while(t--)
{
	int n,m,z,i,cur=0,min=INT_MAX,max=0; 
	cin>>n;
	vector<int>v;
	i=n;
	while(i--)
	{
	    cin>>z;
	    v.push_back(z); 
	    if(z>max)max=z;
	}
	i=n;
	while(i--)
	{
	   
	    z=v[i];
	    if(z>cur&&z<max)cur=z;
	}
	
	cout<<cur<<endl;
	
}
	return 0;
}