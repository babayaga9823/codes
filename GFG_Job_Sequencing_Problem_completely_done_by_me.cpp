#include <bits/stdc++.h>
using namespace std;

struct job
{
    int dead,index,profit;
};
bool comp(job j1,job j2)
{
    return j1.profit>j2.profit;
}
int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
    	int n,i,j;
    	cin>>n;
    	int d,b,c;
    	job jb[n];
    	for(i=0;i<n;i++)
    	{
    	    cin>>d>>b>>c;
    	    jb[i].index=d;
    	    jb[i].dead=b;
    	    jb[i].profit=c;
    	}
        int a[n]={-1},pro=0,cnt=0;
        for(i=0;i<n;i++)a[i]=-1;
        
    	sort(jb,jb+n,comp);
    	for(i=0;i<n;i++)
    	{//cout<<"***"<<i<<endl;
    	    int z=jb[i].dead-1;
    	    for(j=z;j>=0;j--)
    	    {//cout<<"Entered j "<<j<<"**"<<a[j]<<endl;
    	        if(a[j]==-1)
    	        {//cout<<"Entered final "<<cnt<<endl;
    	            a[j]=jb[i].index;
    	            pro+=jb[i].profit;
    	            cnt++;
    	            break;
    	        }
    	    }
    	}
    	cout<<cnt<<" "<<pro<<endl;

    }
    return 0;
}