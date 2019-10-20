#include <iostream>
using namespace std;

int main() {
	long long int n,d,i,j,a[100],z=0,y=0;
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<d;i++)
	{
		z=a[0];
		y=a[n-1];
		a[n-1]=z;
		cout<<"z---------y"<<z<<"++++++"<<y<<"*********a[n-1]"<<a[n-1]<<endl;
		for(j=1;j<n-1;j++)
		{
			
				a[j-1]=a[j];
		}
		a[n-2]=y;
			for(int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<endl;
	
	}

	return 0;
}