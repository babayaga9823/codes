#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
	 long  int n,m,z,i,max=0,a[100000]={0},b[100000]={0},fond=0;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	     cin>>a[i];
	     b[a[i]]+=1;
	     if(a[i]>max)max=a[i];
	 }
	 for(i=0;i<=max;i++)//notice that its going till =max
	 {
	     if(b[i]>(n/2))
	     {
	         fond++;
	         cout<<i<<" ";
	     }
	 }
	 if(fond==0)cout<<-1;
	 cout<<endl;
	 


}
	return 0;
}