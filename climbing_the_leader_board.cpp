#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a,int b)
{
	return (a>b);
}
int main() {
int n,a[100],m,b[100],i,j,c[100],d[100],s=0,f=0,e[100],count=1,pev=0;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>e[i];
}
pev=e[0];
a[0]=e[0];
for(i=0;i<n;i++)
{
	if(pev==e[i])
	{
		continue;
	}
	else
	{
		a[count]=e[i];
		pev=e[i];
		count++;
	}
}

cin>>m;
for(i=0;i<m;i++)
{
	cin>>d[i];
}
for(i=0;i<m;i++)
{
	b[i]=d[m-1-i];
}
for(i=0;i<count;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<m;i++)
{
cout<<b[i]<<" ";
}
cout<<endl;
cout<<"m++++++n"<<m<<" "<<n<<endl;
for(i=0;i<m;i++)
{f=0;
	for(j=0;j<n;j++)
	{
		if(b[i]>=a[j])
		{
			c[s]=j+1;
			s++;
			f++;
			break;
		}
	}
	if(f==0)
	{
		c[s]=n;
			s++;
	}
}

for(i=0;i<s;i++)
{
	cout<<c[s-1-i]<<endl;
}
	return 0;
}