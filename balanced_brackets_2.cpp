#include <iostream>
using namespace std;

int main() {
int n,i,j;
string s;
cin>>n;
for(i=0;i<n;i++)
{int a[1000],c=0,l,ad=0,m=0;
	cin>>s;
	for(j=0;s[j]!='\0';j++)
	{
		if(s[j]=='('||s[j]==')')
		{
			if(s[j]=='('&&s[j+1]==')')
			{	ad++;
				j++;
				continue;
			}
			a[m]=1;
			m++;
		}
		else if(s[j]=='{'||s[j]=='}')
		{
			if(s[j]=='{'&&s[j+1]=='}')
			{
					ad++;
					j++;
				continue;
			}
			a[m]=2;
			m++;
		}
		else if(s[j]=='['||s[j]==']')
		{
			if(s[j]=='['&&s[j+1]==']')
			{
					ad++;
					j++;
				continue;
			}
			a[m]=3;
			m++;
		}
	}
j=m;
for(l=0;l<j;l++)
	{
	cout<<a[l]<<" ";
	}
	cout<<endl;
	for(l=0;l<=(j/2)-1;l++)
	{
		if(a[(j/2)-l-1]==a[(j/2)+l])
		{
			c++;
		}
	}
	
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