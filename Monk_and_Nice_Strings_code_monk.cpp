#include <bits/stdc++.h>
using namespace std;



int main()
{
int n;
cin>>n;
vector<string>v;
 string s;
for(int i=0;i<n;i++)
{
    char z;
    int a,j;
    cin>>s;
    v.push_back(s);
    sort(v.begin(),v.end());
    for(j=0;s>v[j];j++){}
    cout<<j<<endl;
  
}
return 0;
}