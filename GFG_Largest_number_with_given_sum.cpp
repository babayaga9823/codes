#include <bits/stdc++.h>
using namespace std;


int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
    	int n,s;
    	cin>>n>>s;
    	int sum=s,i,j;
    	i=0;
    	int a[n];
    	while(sum>=0&&i<n)
    	{
    		for(j=9;j>=0;j--)
    		{
    			if(sum-j>=0)
    			{
    				sum-=j;
    				a[i]=j;
    				break;
    			}
    		}
    		
    		i++;
    	}
    	if(sum>0)cout<<-1<<endl;
    	else 
    	{
    		i=0;
    		while(i<n)
    		{
    			cout<<a[i];
    			i++;
    		}
    		cout<<endl;
    	}
    }
    return 0;
}