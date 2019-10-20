#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
int n,m,z=0,i,cnt=0,r=0,car=0,j,c; 
string s;
cin>>s;
r=s[s.length()-1]-48;
if(r>5)
{
    r=10-r;
    c=r;
    for(i=s.length()-1;i>=0;i--)
    {
          z=s[i]-48+c;
          if(z>9)
          {
              s[i]=(z%10)+48;
              c=z/10;
              //cout<<"**c"<<c<<"**z"<<z<<endl;
              if(c==0)break;
          }
         else 
         {
             s[i]=z+48;
             break;
         }
        
    }
     if(i<0&&c!=0)
         {j=0;
         cnt=1;
             char ch[1001];
             ch[0]=c+48;
             while(j<s.length())
             {
                 ch[cnt++]=s[j++];
             }
             ch[cnt]='\0';
             string r=ch;
             cout<<r<<endl;
         }
         else
         cout<<s<<endl;
}
else
{
   //c=r;  
   //z=s[s.length()-1]-48-c;
    s[s.length()-1]=48;
    cout<<s<<endl;
}

}
	return 0;
}