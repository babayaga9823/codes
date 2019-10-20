#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 long long int n,m,z,i,cnt=0,a[100000],b[100000]; 
    set<long long int>s;
    cin>>n>>m;
    i=0;
    while(i<n)cin>>a[i++];
    for(i=0;i<m;i++)
    {
        cin>>z;
        b[i]=z;
        s.insert(z);
    }
     for(i=0;i<n;i++)
    {
        z=a[i];
        if(s.find(z)==s.end())cout<<z<<" ";
    }
    cout<<endl;

}
	return 0;
}