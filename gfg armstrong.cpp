#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
{
    int n,z,cnt=0;
    cin>>n;
    z=n;
    while(z!=0)
    {
        cnt=cnt+pow(z%10,3);
        z/=10;
    }
    if(cnt==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
	return 0;
}