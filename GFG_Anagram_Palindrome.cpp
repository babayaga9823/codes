#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0; 
int a[26]={0};
string s;
cin>>s;
for(i=0;i<s.length();i++)a[s[i]-97]+=1;

for(i=0;i<26;i++)if(a[i]%2!=0)cnt++;
if(cnt>1)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
	return 0;
}