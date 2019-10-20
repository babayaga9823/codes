#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,cnt=0,max=0,fond=0; 
string s;
cin>>s;
for(i=0;i<s.length();i++)
{
     z=s[i];
     int num=0;
    char a[100];
    cnt=0;
    fond=0;
    while(i<s.length()&&(z>=48&&z<=57))
    {
        a[cnt++]=z;
        i++;
        z=s[i];
        fond++;
    }
   if(fond!=0)
   {
        a[cnt]='\0';
    num=stoi(a);
   }
    if(num>max)max=num;
}
cout<<max<<endl;
}
	return 0;
}