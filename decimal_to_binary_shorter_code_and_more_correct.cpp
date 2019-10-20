#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n,c=0,a[100],z,b[100],pv=0,count=0,r[100],t=0,e=0,max=0;
cin>>n;
z=n;
for(int i=0;z!=1;i++)
{
	
	if(z%2==1)
	{
		a[c]=1;
		c++;
		z=z/2;
	
	}
	else
	{
		a[c]=0;
		c++;
		z=z/2;
		
	}
	
}
a[c]=1;
for(int i=0;i<=c;i++)
{
	b[i]=a[c-i];
}

for(int i=0;i<=c;i++)
{
if(b[i]==1)
{
	count++;
}
else
{
	if(count>max)
	{
		max=count;
	}
	count=0;
}
}
	if(count>max)
	{
		max=count;
	}
cout<<max<<endl;
return 0;
}