#include <bits/stdc++.h>
		using namespace std;

		int main() 
		{
			unsigned long int t;
			cin>>t;
			for(unsigned long int  l=0;l<t;l++)
			{
			    int n,a[1000000],i,cnt=0,j,x,y;
			    cin>>n;
			    vector<int>v;
			    for(i=0;i<n;i++)
			    {   int r;
			        cin>>r;
			        a[i]=r;
			       
			    }
			     int max=a[0];
			     cnt=1;//notice start from 1
			         for(j=0;j<n;j++)
			        {
			            if(a[j]>max)
			            {
			                max=a[j];
			                cnt++;
			            }
			        }
			    cout<<cnt<<endl;
			}
			return 0;
		}