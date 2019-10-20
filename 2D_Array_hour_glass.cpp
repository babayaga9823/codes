	#include <iostream>
	#include <algorithm>
	using namespace std;

	int main() {

	int a[6][6],i=0,j=0,s[100],sm=0,t=0;
	for(i=0;i<6;i++)
	{
	    for(j=0;j<6;j++)
	    {
	        cin>>a[i][j];
	    }
	    
	    
	}
	for(i=0;i<4;i++)//notice the indexing and draw the diagram to understand
	{
	    for(j=0;j<4;j++)//notice the indexing and draw the diagram to understand
	    {
	     sm=a[i+0][j]+a[i+0][j+1]+a[i+0][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
	     s[t]=sm;
	     t++;
	    }
	}
	sort(s,s+t);

	cout<<s[t-1]<<endl;
	    return 0;
	}