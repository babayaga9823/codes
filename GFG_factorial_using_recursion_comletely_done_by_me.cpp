#include <bits/stdc++.h>
using namespace std;

int a[1000];
int fact(int n)
{
    if(n==1||n==0)return 1;
    else return n*fact(n-1);
}
int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
    	int n;
    	cin>>n;
    	int z=fact(n);
    	cout<<z<<endl;

    }
    return 0;
}