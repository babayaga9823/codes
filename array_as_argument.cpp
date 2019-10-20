#include<iostream>
using namespace std;
    int n;
void sor(int ar[])
{
    	for(int i=0;i<n-1;i++)
		{
			for(int j=i;j<n-1;j++)
			if(ar[i]>ar[j+1])
			{
				int temp;
				temp=ar[j+1];
				ar[j+1]=ar[i];
				ar[i]=temp;
			}
		}
}

int main()
{

       int ar[n];
    cout<<"ENTER THE ELEMETS OF THE ARRAY\n";
    cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter: ";
		cin>>ar[i];
		cout<<endl;
	}
sor(ar);
	for(int i=0;i<n;i++)
	{
		cout<<"Element: ";
		cout<<ar[i];
		cout<<endl;
	}
	return 0;
}
