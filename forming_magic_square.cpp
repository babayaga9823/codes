#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[3][3],i,j,r=0,cl=0,c=0,str[100],f[100],count=0,r=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			r=r+a[i][j];
			
		}
		str[c]=r;
			c++;
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			cl=cl+a[j][i];
			
		}
		str[c]=cl;
			c++;
	}
	str[c]=a[1][1]+a[2][2]+a[3][3];
	c++;
	
	for(j=0;j<c;j++)//delete it
		{
			cout<<str[j]<<" ";
			
		}
		sort(str,str+c);
		cout<<endl;
		for(j=0;j<=100;j++)//initialize the array with -1
		{
		f[j]=-1;
		}
	for(i=0;i<c;i++)
	{count=0;
		for(j=0;j<c;j++)
		{
			if(str[i]==str[j])
			{	
				count++;
			}
		}
		
		f[count]=str[i];
	}
	
		for(i=0;f[i]!='\0';i++)
	{
		if(f[i]!=-1)
		{
		cout<<i<<"="<<f[i]<<endl;	
		r=f[i];
		}
		
		
	}
	return 0;
}