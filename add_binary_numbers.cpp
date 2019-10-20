#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0; 

string s1,s2,r,p,q;
char ch[201];
int c=0,sml=0,car=0;
cin>>s1>>s2;
if(s1.length()<=s2.length())
{
    p=s1;
    r=s2;//r is longer
}
else
{
    p=s2;
    r=s1;
}
sml=p.length()-1;
for(i=r.length()-1;i>=0;i--)
{
   if(sml>=0)
   {//cout<<r[i]<<" "<<p[sml];
       c=r[i]-48+p[sml--]-48+car;
      // cout<<"**"<<c<<endl;
       if(c>1)car=1;
       else car=0;
       c=c%2;
       r[i]=c+48;
       ch[i+1]=r[i];
       //cout<<"+++"<<i+1<<" "<<r[i]<<endl;
      
   }
   else{
       //cout<<r[i]<<" e "<<i;
       c=r[i]-48+car;
       //cout<<"**"<<c<<endl;
       if(c>1)car=1;
       else car=0;
       c=c%2;
       r[i]=c+48;
       ch[i+1]=r[i];
       //cout<<"+++"<<i+1<<" "<<r[i]<<endl;
   }
}
if(i<0&&car>0)
{
    //cout<<"E";
    
 ch[0]=49;   
 //cout<<"+++"<<0<<" "<<ch[0]<<endl;
 ch[r.length()+1]='\0';
}
else{
    for(i=0;i<r.length();i++)ch[i]=ch[i+1];a
    ch[r.length()]='\0';
}


cout<<ch<<endl;
}
	return 0;
}