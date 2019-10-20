#include <bits/stdc++.h>
	using namespace std;

	int main() 
	{
		unsigned long int t;
		cin>>t;
		for(unsigned long int  l=0;l<t;l++)
		{
		    int n,i,j;
		    cin>>n;
		    int a[n+1];
		    for(i=0;i<n;i++)
		    {
		        cin>>a[i];
		    }
		    int h=floor(log(n)/log(2));
		    cout<<h<<endl;
		}
		return 0;
	}