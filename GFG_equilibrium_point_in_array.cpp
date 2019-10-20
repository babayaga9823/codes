#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 
cin>>n;
int a[n],sum=0,cursum=0,fond=0;
for(i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
for(i=0;i<n;i++)
{
    if(cursum==sum-a[i]-cursum)
    {
        cout<<i+1<<endl;
        fond++;
        break;
    }
    else cursum+=a[i];
}
if(fond==0)cout<<-1<<endl;

}
	return 0;
}