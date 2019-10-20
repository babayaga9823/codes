#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int b;
	int x[1000],y[1000],m,n,z[1000000],c=0,f=0;
	cin>>b>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>y[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			z[c]=x[i]+y[j];
			c++;
		}
	}
	
	sort(z,z+c);
	for(int i=c-1;i>=0;i--)
	{
		if(z[i]<=b)
		{
			cout<<z[i]<<endl;
				f++;
			break;
		
		}
	}
	if(f==0)
	{
		cout<<"-1"<<endl;
	}
	return 0;
}