#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
int n,m,z,i,cnt=0,wn=0; 
string s;
vector<string>v;
cin>>s;
for(i=0;i<s.length();i++)
{
    char c[1000];
    cnt=0;
    while(i<s.length()&&s[i]!='.')
    {
        c[cnt++]=s[i++];
    }
    c[cnt]='\0';
    string r;
    r=c;
    v.push_back(r);
}
reverse(v.begin(),v.end());
for(i=0;i<v.size();i++)
{
    cout<<v[i];
    if(i<v.size()-1)cout<<".";
}
cout<<endl;
}
    return 0;
}