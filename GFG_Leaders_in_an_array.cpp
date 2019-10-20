#include <bits/stdc++.h>
using namespace std;
 void printLeaders(int arr[], int N) 
{ 
  int cur_max = INT_MIN;
	vector<int>v;
		for(int i = N-1; i>=0 ; i--)
		{
			if(arr[i] >= cur_max)
				{
					//cout << arr[i] <<" ";
					v.push_back(arr[i]);
					cur_max = arr[i];
				}
		}
	
		reverse(v.begin(),v.end());
			int i=0;
		while(i<v.size())
		{
		    cout<<v[i]<<" ";
		    i++;
		}
  } 

int main() {
	int t;
	cin>>t;
	for(int  l=0;l<t;l++)
	{
        int n,i,j,ld=0;
        cin>>n;
       int arr[n];
        for(i=0;i<n;i++)
        {
            int r;
            cin>>r;
            arr[i]=r;
        }
        printLeaders(arr,n);
        cout<<endl;
 	}
 
	return 0;
}