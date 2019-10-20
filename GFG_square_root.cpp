#include<bits/stdc++.h>
using namespace std;
long long int floorSqrt(long long int x);
  
//Position this line where user code will be pasted.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}


/*This is a function problem.You only need to complete the function given below*/

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    // Your code goes here
    long long int start=1, end=x/2, ans=1;
    while(start<=end){
        long long int mid=(start+end)/2;
        if(mid*mid==x){
            return mid;
        }
        if(mid*mid<x){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}