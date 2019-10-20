#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
       cin>>s;
       int cnt=0,y;
      for(int i=0;i<s.length();i++)
      {
            y=s[i];
            if(y==97||y==101||y==105||y==111||y==117||y==97-32||y==101-32||y==105-32||y==111-32||y==117-32)
            cnt++;
      }
      cout<<cnt<<endl;
    }
    
 return 0;   
    
}