//function to find the largest in a array

#include<iostream>
using namespace std;
int n;
template <class Y>sor(Y ar[])
{
    	for(int i=0;i<n-1;i++)
		{
			for(int j=i;j<n-1;j++)
			if(ar[i]>ar[j+1])
			{
				Y temp;
				temp=ar[j+1];
				ar[j+1]=ar[i];
				ar[i]=temp;
			}
		}

}

int main()
{
	float c[n];
    cout<<"ENTER THE ELEMETS OF THE ARRAY\n";
    cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter: ";
		cin>>c[i];
		cout<<endl;
	}
    sor(c);
	for(int i=0;i<n;i++)
	{
		cout<<"Element: ";
		cout<<c[i];
		cout<<endl;
	}
	return 0;
}
