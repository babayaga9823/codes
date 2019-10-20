#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0,nott=0; 
int a[26]={0},b[26]={0};
i=0;

string s,r;
cin>>s>>r;
for(i=0;i<s.length();i++)a[s[i]-97]+=1;
for(i=0;i<r.length();i++)b[r[i]-97]+=1;
for(i=0;i<26;i++)
{
    if(a[i]!=b[i])
    {
        nott++;
        break;
    }
}
if(nott)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
	return 0;
}