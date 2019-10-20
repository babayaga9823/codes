#include <bits/stdc++.h>
using namespace std;
unsigned long int fact(int n)
{
    if(n==0||n==1)return 1;
    else
    {
        unsigned long int z=n*fact(n-1);
        return z;
    }
}
int main() {
 int t;
 cin>>t;
 while(t--)
{
    unsigned long  n,z,cnt=0;
    cin>>n;
   cout<<fact(n)<<endl;
}
	return 0;
}