#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0,e=0,v=0,a=0,b=0;
	 cin>>v>>e;
vector<int>vctr[v];
for(i=0;i<e;i++)
{
    cin>>a>>b;
    vctr[a].push_back(b);
    vctr[b].push_back(a);
}
for(i=0;i<v;i++)
{
    if(!vctr[i].empty())cout<<i<<"-> ";
    else cout<<i;
   for(j=0;j<vctr[i].size();j++)
   {
       cout<<vctr[i][j];
       if(j<vctr[i].size()-1)cout<<"-> ";
   }
   cout<<endl;
}

}
	return 0;
}