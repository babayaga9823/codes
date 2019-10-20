#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main() {
int t;
 cin>>t;
 while(t--)
{
long long int n,m,z,i=0,max=INT_MIN,a[100000]; 
vector<long long int>v;
cin>>n;
while(i<n)
{
    cin>>a[i];
    i++;
}
z=n-1;
while(z>=0)
{
    if(a[z]>=max)
    {
        max=a[z]; 
   // cout<<a[z]<<" ";
    v.push_back(a[z]);
    }
    z--;
}
z=n;
sort(v.begin(),v.end(),comp);
i=0;
while(i<v.size())cout<<v[i++]<<" ";
cout<<endl;
}
	return 0;
}