#include <iostream>
#include <algorithm>
using namespace std;

int main() {
long long int n,m,i,j,ar[1000],a,b,k;
cin>>n>>m;
	for(j=0;j<n;j++)
	{
		ar[j]=0;
	}
for(i=0;i<m;i++)
{
	cin>>a>>b>>k;
	for(i=a-1;i<=b-1;i++)
	{
		ar[i]=ar[i]+k;
	}
	cout<<" m "<<m<<" ";
		for(i=0;i<=n;i++)
	{
	cout<<ar[i]<<" ";
	}
	cout<<endl;
}

sort(ar,ar+n+1);
	for(i=0;i<=n;i++)
	{
	cout<<ar[i]<<" ";
	}
	cout<<endl;
cout<<ar[n]<<endl;


	return 0;
}