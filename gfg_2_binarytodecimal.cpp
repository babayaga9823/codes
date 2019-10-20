#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
{
    unsigned long long int n,z,cnt=0,m;
    string s;
    cin>>n;
    z=0;
    while(n!=0)
    {
        cnt+=pow(2,z)*(n%10);
        n/=10;
        z++;
    }
   cout<<cnt<<endl;
}
	return 0;
}