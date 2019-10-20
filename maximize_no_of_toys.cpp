#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b)
{ return a>b;
}
int main() {
int t;
 cin>>t;
 while(t--)
{
	int n,m,z,i,j,max=0,cnt=0,min=INT_MAX; 
cin>>n>>m;
z=m;
set<int>s;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
while(z>0)
{
    i=0;
    j=z;
    while(i<n)
    {
        if(z-a[i]>=0&&a[i]!=-1)
        {
            z-=a[i];
            a[i]=-1;
            //cout<<a[i]<<" ";
            cnt++;
            break;
        }
        i++;
    }
    if(i=n+1&&j==z)break;
}
cout<<cnt<<endl;


}
	return 0;
}