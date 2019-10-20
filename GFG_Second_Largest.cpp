#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
	{
	    int n,i,max=-999,min=-888;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>max)
	        {
	            max=a[i];
	        }

	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>min&&a[i]<max)
	        {
	            min=a[i];
	        }

	    }
	    cout<<min<<endl;
	    	    
	}
	
	return 0;
}