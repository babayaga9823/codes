#include <bits/stdc++.h>
using namespace std;

int main()
{
string s,r[100];
vector<string>v;
cin>>s;
int n,i,j;
cin>>n;

for(i=0;i<s.length()+1;i++)
{
    char c[100];
    int cnt=0;
   for(j=i;s[j]!='\0';j++)
{
    c[cnt]=s[j];
    cnt++;
} 
    c[cnt]='\0';
    r[i]=c;
   // cout<<r[i]<<endl;
    v.push_back(c);
}
sort(v.begin(),v.end());
cout<<v[n]<<endl;
return 0;
}