#include <bits/stdc++.h>
using namespace std;


int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
    	int n,i,j,cost=0;
    	cin>>n;
    	int a[]= {2000,500,200,100,50,20,10,5,2,1};
    	cost=n;
    	vector<int>v;
    	while(cost>0)
    	{
    	    for(i=0;i<10;i++)
    	    {
    	        if(cost-a[i]>=0)
    	        {
    	            cost-=a[i];
    	            v.push_back(a[i]);
    	            break;
    	        }
    	    }
    	}
    	i=0;
    	while(i<v.size())
    	{
    	    cout<<v[i]<<" ";
    	    i++;
    	}
cout<<endl;
    }
    return 0;
}