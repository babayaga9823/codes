#include<iostream>
#include<cstring>
using namespace std;
int LCS(char *a,char *b,int m,int n)
{
	int i,j;
	int c[m+1][n+1];
	
   for(i=0;i<=m;i++)
	   {
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				c[i][j]=0;
			}
			else if(a[i]==b[j])
			{
				c[i][j]=c[i-1][j-1]+1;
			}
			else if(a[i]!=b[j])
			{
				if(c[i-1][j]>=c[i][j-1])
				{
					c[i][j]=c[i-1][j];
				}
				else
				{
					c[i][j]=c[i][j-1];
				}
			}
		}
	}
	return c[m][n];
}
int main()
{
	int i,j,m,n;
	char a[1000],b[1000];
	cin>>a;
	cin>>b;
	m=strlen(a);
	n=strlen(b);
	cout<<"\n"<<"longest common subsequense length is :"<<" "<<LCS(a,b,m,n);
	return 0;
}
