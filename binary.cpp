#include<iostream>
using namespace std;
void sort(int a[],int n)
{
for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int z=a[j];
				a[j]=a[j+1];
				a[j+1]=z;
			}
		}
	}
}
void binary(int a[],int p,int r,int z)
{
if(p==r)
{
	if(z==a[p])
	{
		cout<<"Element found\n";
	}
	else
	{
		cout<<"Element not found!!\n";
	}
}
else
{
int q=(p+r)/2;
if(z<=a[q])
{
binary(a,p,q,z);
}
else
{
binary(a,q+1,r,z);
}
	
}

}

int main()
{
	int a[100],n,*pt;
	cout<<"Enter the no. of elements : ";
	cin>>n;cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element no. "<<i+1<<" ";
		cin>>a[i];cout<<endl;
	}
	sort(a,n);
	cout<<"The sorted array : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	binary(a,0,4,30);
	return 0;
}