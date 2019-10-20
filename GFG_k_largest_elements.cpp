#include <bits/stdc++.h>
	using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
	int main() 
	{
		unsigned long int t;
		cin>>t;
		for(unsigned long int  l=0;l<t;l++)
		{
		    int n,r,i,j;
		    cin>>n>>r;
		    vector<int>v;
		    for(i=0;i<n;i++)
		    {
		        int z;
		        cin>>z;
		        v.push_back(z);
		    }
		    sort(v.begin(),v.end(),comp);
		    for(i=0;i<r;i++)
		    {
		        cout<<v[i]<<" ";
		    }
		    cout<<endl;
		}
		return 0;
	}