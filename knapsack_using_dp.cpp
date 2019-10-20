#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// defining structure
struct item {
  int value, weight;
  item(int x, int y): value(x), weight(y){}
};
double comparator(item a, item b){
  double r1 = (double)a.value/a.weight;
  double r2 = (double)b.value/b.weight;
  return r1 > r2;
}

double knapsack(int w, struct item a[], int n){
  cout<<"Before"<<endl;
  for(int i = 0; i < n; i++)
  {
    cout<<a[i].value << " "<<a[i].weight<<" ";
  }
  cout<<endl;
  sort(a, a+n, comparator);
  double totalValue  = 0.0;
  double totalWeight = 0.0;
  for(int i = n-1; i >= 0; i--)
  {
    if (totalWeight + a[i].weight <= w) {
      totalValue += a[i].value;
      totalWeight += a[i].weight;
    }
  }
  cout<<"After knapsack"<<endl;
  for(int i = 0; i < n; i++)
  {
    cout<<a[i].value <<" "<<a[i].weight<<" ";
  }
  cout<<endl;
  return totalValue;
}
int main(){
  item arr[] = { {60, 10},{120, 30},{100, 20}};
  cout<<"Enter the max weight"<<endl;
  int w;
  cin>>w;
  double value = knapsack(w, arr, 3);
  cout<<"Required value is "<<value<<endl;
  return(0);
}