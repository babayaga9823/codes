#include <stdio.h>
#include<iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
 using namespace std;
long long minDist(long long arr[], long long n, long long x, long long y);
int main() 
{
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++)
			cin>>a[i];
		long long x,y;
		cin>>x>>y;
		cout<<minDist(a,n,x,y)<<endl;
	}
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
long long minDist(long long int arr[], long long int n, long long int x, long long int y)
{  
long long int i,j,f1=0,a,b,f2=0,px=0,cx=0,py=n-1,cy=0,min=9999;    
   for(i=0;i<n;i++)
   {
       if(arr[i]==x)
       {f1++;
       a=i;
           //cout<<"++a"<<a<<endl;
       }
       if(arr[i]==y)
       {f2++;
           b=i;
              //cout<<"++b"<<b<<endl;
       }
       if(f1!=0&&f2!=0)
       {
           if(abs(a-b)<min)
           min=abs(a-b);
       }
       
   }
   if(f1==0||f2==0)return -1;
   else return min;
}