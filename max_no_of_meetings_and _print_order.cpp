#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second<p2.second;
}
int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 
cin>>n;
pair<int,int>p[n],r[n];
map<int,int>mp;
for(i=0;i<n;i++)
{
    cin>>p[i].first;
    r[i].first=p[i].first;
}
for(i=0;i<n;i++)
{
    cin>>p[i].second;
    r[i].second=p[i].second;
}
sort(p,p+n,comp);
int end=p[0].second;
cnt=1;
  z=p[0].first;
        for(i=0;i<n;i++)
        {
            if(z==r[i].first)
            {
                cout<<i+1<<" ";
                break;
            }
        }
for(i=0;i<n-1;i++)
{
    if(end<=p[i+1].first)
    {
        end=p[i+1].second;
        cnt++;
        z=p[i+1].first;
        for(j=0;j<n;j++)
        {
            if(z==r[j].first)
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
    
}
cout<<endl;
}
	return 0;
}