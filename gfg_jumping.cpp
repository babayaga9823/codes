#include <bits/stdc++.h>
using namespace std;
int jumping(unsigned long int n)
{
    unsigned long int m,z;
    //if(n>10)cout<<"fun"<<n<<endl;
m=n%10;
n/=10;
while(n!=0)
{
z=n%10;
n/=10;
//cout<<"+++ m "<<m<<" z "<<z<<endl;
if((abs(m-z))!=1)return 0;
m=z;
}
//cout<<"ret 1"<<endl;
return 1;
}
int main() {
unsigned long int t;
 cin>>t;
 while(t--)
{
	unsigned long int n,m,z,i,cnt=0; 
cin>>n;
//cout<<"n"<<endl;
m=0;
while(m<=n)
{
    int f=jumping(m);
    if(f)cout<<m<<" ";
    m++;
}
cout<<endl;
}
	return 0;
}