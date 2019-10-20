#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,cnt=0; 
    vector<int>v;
    cin>>n>>m;
    j=n;
    while(j--)
    {
        cin>>z;
        v.push_back(z);
    }
    j=m;
     while(j--)
    {
        int a=v[0];
        for(i=0;i<n-1;i++)v[i]=v[i+1];
        v[n-1]=a;
    }
    j=0;
    while(j<n){cout<<v[j]<<" ";j++;}
    cout<<endl;
}
	return 0;
}