#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n-1];
	    int m=0,k;
	    for(i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        m+=a[i];
	    }
	    k=(n)*(n+1)/2;
	    m=k-m;
	    cout<<m<<endl;
	}
}