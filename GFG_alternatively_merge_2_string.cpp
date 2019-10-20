#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
 cin>>t;
while(t--)
{
int n,m,z,i,cnt=0,a=0,b=0; 
string s1,s2;
cin>>s1>>s2;
for(int i=0;i<(s1.length()+s2.length());)
{
    if(a<s1.length())
    {
        cout<<s1[a++];
        i++;
    }
     if(b<s2.length())
    {
        cout<<s2[b++];
        i++;
    }
}

cout<<endl;
}
	return 0;
}''