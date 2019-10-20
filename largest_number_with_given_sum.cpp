#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{

int n,m,z,i,j,max=0,cnt=0,num=0; 
cin>>n>>m;
z=m;
char c[1000000];
for(i=0;i<n;i++)
{
    j=9;
    while(j>=0)
    {
        if(z-j>=0)
        {
        
            c[cnt++]=j+48;
            z-=j;
            break;
        }
        j--;
    }
    
}
c[cnt]='\0';
//string s=
if(i=n+1&&z!=0)cout<<-1<<endl;
else cout<<c<<endl;

}
return 0;
}