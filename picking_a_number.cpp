#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int a[100],n,i,j,count=0,max=0,s=0,f=0;
cin>>n;//output is coming wrong
for(i=0;i<n;i++)
{
	cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n-1;i++)//becoz it goes till i+1
{
if(a[i+1]-a[i]<=1)
{
	if(s==0)
	{
		f=i;
		s++;
	}
	if(a[i]-a[f]<=1)
	{
		count++;	
	}
	else
	{
	
	if(count>max)
	{
		max=count;
	}
		s=0;
		count=0;
	}
	
}
else
{
	if(count>max)
	{
		max=count;
	}
	s=0;
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