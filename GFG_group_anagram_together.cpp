#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0,j; 
cin>>n;
string s[n];
vector<string>r;
for(i=0;i<n;i++)
{
    cin>>s[i];
    char ch[26];
    int h[26]={0};
    int charcnt=0;
    for(j=0;j<s[i].length();j++)
    {
        h[s[i][j]-97]+=1;
    }
     for(j=0;j<26;j++)
    {
       ch[j]=h[j]+48;
    }
    ch[j]='\0';
    r.push_back(ch);
}
sort(r.begin(),r.end());
string f=r[0];
int samcnt=1;
vector<int>v;
for(i=1;i<n;i++)
{
    if(f==r[i])samcnt++;
    else
    {
        f=r[i];
        v.push_back(samcnt);
        samcnt=1;
    }
}
if(r[n-1]==r[n-2])
{
     v.push_back(samcnt);
}
if(r[n-1]!=r[n-2])
{
     v.push_back(1);
}
sort(v.begin(),v.end());
i=0;
while(i<v.size())cout<<v[i++]<<" ";
cout<<endl;
}
	return 0;
}