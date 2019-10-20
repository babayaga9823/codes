#include<iostream>
using namespace std;

void binary(int a[],int p,int r,int z)
{
	int q=(p+r)/2;
	int al=0;
	while(al!=1)
	{
		if(z<=a[q])
	{
		binary(a,p,q,z);
		al=p-q+1;
	}
	else
	{
		binary(a,q+1,r,z);
		al=r-q;
	}
	}
	if(z==a[q])
	{
		cout<<"Element found\n";
	}
	else
	{
		cout<<"Element not found";
	}
}

int main()
{	
	int n;
	cout<<"Enter the number of elements of array\n";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element "<<i+1<<" ";
		cin>>a[i];
		cout<<endl;
	}
	binary(a,0,n-1,5);
	return 0;
}