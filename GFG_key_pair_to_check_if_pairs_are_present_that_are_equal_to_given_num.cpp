#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0,sub=0,fond=0; 
	 cin>>n>>m;
    int a[n],h[1000000]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)max=a[i];
       h[a[i]]+=1;
    }
     for(i=0;i<max;i++)
    {
        if(h[i]!=0)
        {
           z=i;
           sub=m-z;
           if(sub!=z&&sub>=0&&h[sub]>0)
           {
               //cout<<"*** "<<z<<" SUB "<<sub<<endl;
               fond++;
           }
           else if(sub==z&&sub>=0&&h[sub]>1)fond++;
        }
        
    }
if(fond!=0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
	return 0;
}