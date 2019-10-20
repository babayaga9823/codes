#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 
vector<int>v;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>z;
    v.push_back(z);
}
sort(v.begin(),v.end());
for(i=0;i<n;i++)cout<<v[i]<<" ";
cout<<endl;
}
	return 0;
}