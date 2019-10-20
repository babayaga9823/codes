#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 long long int n,m,z,i,cnt=0,fond=0; 
    multiset<int>s,p;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>z;
        a[i]=z;
        if(s.find(z)==s.end())s.insert(z);
        else p.insert(z);;
    }
    for(i=0;i<n;i++)
    {
        z=a[i];
        if(s.find(z)!=s.end()&&p.find(z)==p.end())
        {
            cout<<z<<endl;
            fond++;
            break;
        }
    }
if(fond==0)cout<<0<<endl;
}
	return 0;
}