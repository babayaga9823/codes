#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    cin>>n>>m;
	    int i,str1=0,str2=0,f=0,d1=0,d2=0;
	    for(i=n;;i++)
	    {
	        if(i%m==0)break;
	    }
	    d1=abs(abs(n)-abs(i));
	    str1=i;
	    for(i=n;;i--)
	    {
	        if(i%m==0)break;
	    }
	     d2=abs(abs(n)-abs(i));
	    str2=i;
	    //cout<<d1<<"++"<<d2<<endl;
	   if(d1<d2)f=str1;
	   else f=str2;
	   if(d1==d2)
	   {
	       if(str1<0&&str2<0)f=min(str1,str2);
	       else f=max(str1,str2);
	   }
	    cout<<f<<endl;
	    
	}
	return 0;
}