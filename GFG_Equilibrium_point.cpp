#include<bits/stdc++.h>
using namespace std;

	int main() 
	{
		unsigned long int t;
		cin>>t;
		for(unsigned long int  le=0;le<t;le++)
		{
	    	 int n;
	    	 cin>>n;
	    	 int a[n+1],i,j;
	    	 for(i=0;i<n;i++)
	    	 {
	    	     cin>>a[i];
	    	 }
	    	 int l=0,r=0,fond=0,ttl=0;
	    	 vector<int>v;
	    	 for(i=0;i<n;i++)
	    	 { 
	    	     ttl+=a[i];
	    	      v.push_back(ttl);
	    	 }
	    	  for(i=0;i<n;i++)
	    	 { 
	    	    l=v[i]-a[i];
	    	    r=ttl-v[i];
	    	    if(l==r)
	    	    {
	    	        fond++;
	    	        break;
	    	    }
	    	 }
	    	 if(fond==0)cout<<-1<<endl;
	    	 else cout<<i+1<<endl;
	
		}
		return 0;
	}