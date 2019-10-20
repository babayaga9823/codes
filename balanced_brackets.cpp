#include <iostream>
using namespace std;

int main() {
int n,i,j,a[1000],c=0,l;
string s;
cin>>n;
for(i=0;i<n;i++)
{c=00;
	cin>>s;
	for(j=0;s[j]!='\0';j++)
	{
		if(s[j]=='('||s[j]==')')
		{
			a[j]=1;
		}
		else if(s[j]=='{'||s[j]=='}')
		{
			a[j]=2;
		}
		else if(s[j]=='['||s[j]==']')
		{
			a[j]=3;
		}
	}
		for(l=0;l<j;l++)
	{
	cout<<a[l]<<" ";
	}
	cout<<endl;
	cout<<"+++j"<<j<<endl;
	for(l=0;l<(j/2)-1;l++)
	{
		if(a[(j/2)-l-1]==a[(j/2)+l])
		{
			c++;
		}
	}
	cout<<"---"<<c<<endl;
	if(c==j/2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
	return 0;
}