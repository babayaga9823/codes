#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 
int a[]={2000,500,200,100,50,20,10,5,2,1};
cin>>n;
z=n;
while(z!=0)
{
    i=0;
    while(i<10)
    {
        if(z-a[i]>=0)
        {
            z-=a[i];
            cout<<a[i]<<" ";
            break;
        }
        i++;
    }
}
cout<<endl;
}
	return 0;
}