#include <bits/stdc++.h>
	using namespace std;

	int main() 
	{
		unsigned long int t;
		cin>>t;
		for(unsigned long int  l=0;l<t;l++)
		{
		    int n,i;
		    cin>>n;
		    vector<int>v;
		    for(i=0;i<n;i++)
		    {
		        int z;
		        cin>>z;
		        v.push_back(z);
		    }
		    vector<int>r;
		    r=v;
		    sort(v.begin(),v.end());
		    int pre=v[0],cur,fond=0;
		    for(i=1;i<n;i++)
		    {cur=v[i];
		        if(cur==pre)
		        {
		            fond++;
		            break;
		        }
		        else
		        {
		            pre=v[i];
		        }
		    }
		    if(r==v&&fond==0)cout<<1<<endl;
		    else cout<<0<<endl;
		}
		return 0;
	}