#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2)
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
pair<int,int>p[n];
for(i=0;i<n;i++)
{
    cin>>p[i].first;
}
for(i=0;i<n;i++)
{
    cin>>p[i].second;
}
sort(p,p+n,comp);
cnt=1;
int end=p[0].second;
for(i=0;i<n-1;i++)
{
    if(end<=p[i+1].first)
    {end=p[i+1].second;
        cnt++;
    }
}
cout<<cnt<<endl;
}
	return 0;
}