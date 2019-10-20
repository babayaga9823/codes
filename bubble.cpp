#include<iostream>
using namespace std;

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
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)	
		{
			if(a[j]>a[j+1])
			{
				int z;
				z=a[j+1];
				a[j+1]=a[j];
				a[j]=z;
			}
		}
	}
	cout<<"The sorted elements are :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}

}