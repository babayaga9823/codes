#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
     int n,m,z,i,cnt=0; 
    int h[2]={0,1};
    cin>>n;
    int a[n];
    i=0;
    while(i<n)
    {
        cin>>a[i];
        h[a[i]]+=1;
        i++;
    }
    int ze=h[0],on=h[1];
    while(cnt<n)
    {
        if(cnt<ze)a[cnt]=0;
        else a[cnt]=1;
        cout<<a[cnt]<<" ";
        cnt++;
    }
cout<<endl;

}
    return 0;
}