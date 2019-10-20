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
		    int a[n+1][n+1];
		    for(i=1;i<=n;i++)
		    {
		        for(j=1;j<=n;j++)
		        {
		            cin>>a[i][j];
		        }
		    }
		   j=0;
		    for(i=1;i<=n;i++)
		    {
		        if(j==0)
		        for(j=1;j<=n;j++)
		        {
		          cout<<a[i][j]<<" "; 
		        }
		        if(j==n+1&&i!=n)
		        {i++;
		            for(j=n;j>0;j--)
		        {
		          cout<<a[i][j]<<" "; 
		        }
		        }
		    }
		    cout<<endl;
		}
		return 0;
	}