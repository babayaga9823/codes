#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n,c=0,a[100],z,b[100],pv=0,count=0,r[100],t=0,e=0;
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
r[i]=-1;
}
pv=b[0];
for(int i=0;i<=c;i++)
{
if(pv==b[i])	
{
	count++;
	t++;
}
else
{
	pv=b[i];
	r[t]=count;
	t++;
	count=1;
	e++;
}

}
if(e==0)
{
	r[t-1]=count;//t-1 becoz already t++ done in if part(when only if part is excuted and else part is not at all executed)
}

sort(r,r+t);
cout<<r[t-1]<<endl;
	return 0;
}