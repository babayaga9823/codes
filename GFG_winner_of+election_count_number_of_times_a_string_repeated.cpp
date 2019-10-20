#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,cnt=0; 
cin>>n;
string s[n];
map<string,string>mp;
vector<string>r;
for(i=0;i<n;i++)
{
    cin>>s[i];
    r.push_back(s[i]);
}
sort(r.begin(),r.end());
string f=r[0],win;
int strcnt=1,max=0;
for(i=1;i<n;i++)
{
    if(f==r[i])
    {
       strcnt++; 
    }
    else
    {
        if(strcnt>max)
        {
            max=strcnt;
            win=f;
            //cout<<"*** "<<mp[win]<<max<<endl;
        }
        f=r[i];
        strcnt=1;
    }
}
if(r[n-1]==r[n-2])
{
      if(strcnt>max)
        {
            max=strcnt;
            win=f;
        }
}
if(r[n-1]!=r[n-2])
{
      if(strcnt>max)
        {
            max=strcnt;
            win=f;
        }
}

cout<<win<<" "<<max<<endl;

}
	return 0;
}