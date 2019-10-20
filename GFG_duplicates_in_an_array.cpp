#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main()
{
  int t;
  cin>>t;
  while(t-- > 0){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    printDuplicates(a, n);
    cout<<endl;
  }
  return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
void printDuplicates(int arr[], int n)
{
  int h[100000]={0},cnt=0;
  for(int i=0;i<n;i++)
  {
      h[arr[i]]+=1;
      if(h[arr[i]]>1)
      {
            cnt++;
          cout<<arr[i]<<" ";
          h[arr[i]]=INT_MIN;
      }
  }
  if(cnt==0)cout<<-1;
 
}
