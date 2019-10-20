#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,i,j,max=0,cnt=0; 
	 char z;
    char a[]={ '!', '#' ,'$', '%', '&', '*', '@', '^', '~' };
    int h1[130]={0},h2[130]={0};
    for(int i=0;i<9;i++)
    {
        h1[(int)a[i]]+=1;
        h2[a[i]]+=1;
       // cout<<
    }
    cin>>n;
     for(int i=0;i<n;i++)
    {
        cin>>z;
        h1[z]+=1;
    }
     for(int i=0;i<n;i++)
    {
        cin>>z;
        h2[z]+=1;
    }
    char t[100];
    cnt=0;
    for(int i=0;i<9;i++)
    {
        if(h1[a[i]]>1&&h2[a[i]]>1)t[cnt++]=a[i];
    }
    t[cnt]='\0';
    for(int i=0;i<cnt;i++)cout<<t[i]<<" ";
    cout<<endl;
    for(int i=0;i<cnt;i++)cout<<t[i]<<" ";
    cout<<endl;

}
	return 0;
}