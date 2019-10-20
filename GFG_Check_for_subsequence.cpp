#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
 cin>>t;
 while(t--)
{
    
	 int n,m,z,i,cnt=0,fond=0; 
string s1,s2;
cin>>s1>>s2;
for(i=0;i<s2.length();i++)
{
    if(cnt<s1.length()&&s1[cnt]==s2[i])
    {
        cnt++;
        fond++;
    }
}
if(fond==s1.length())
{
    cout<<1<<endl;
}
else   cout<<0<<endl;
}
	return 0;
}