#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
 while(t--)
{
     int n,m,z,i,j,max=0,cnt=0,l=0; 
     int h[1000000+1]={0},a[1000000]={0};
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]>max)max=a[i];
         h[a[i]]+=1;
     }
      for(i=0;i<=max;i++)
     {
         if(h[i]>1){
             cout<<i<<" ";
             break;
         }
     }
      for(i=1;i<=n;i++)
     {
         if(h[i]==0){
             //cout<<"LOL";
             l++;
             cout<<i<<" "<<endl;;
             break;
         }
     }
//if(l==0)cout<<n<<endl;
}
    return 0;
}