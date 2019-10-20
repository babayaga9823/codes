#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second==p2.second)
    {
        return p1.first<p2.first ;
    }
     return p1.second>p2.second;
}
int main() {
int t;
 cin>>t;
 while(t--)
{
     int n,m,z,i,j,max=0,cnt=0; 
     cin>>n;
     int a[n]={0},h[1000]={0};
    pair<int,int>p[n];
    i=0;
    while(i<n)
    {
        cin>>z;
        a[i]=z;
        if(z>max)max=z;
        h[z]+=1;
        i++;
    }
    i=0;
     while(i<=max)
    {
        
        if(h[i]!=0)
        {
            p[cnt].first=i;
            p[cnt].second=h[i];
            cnt++;
        }
        i++;
    }
sort(p,p+cnt,comp);
i=0;
     while(i<cnt)
    {
        j=0;
        while(j<p[i].second)
        {
           cout<<p[i].first<<" ";
           j++;
        }
        i++;
    }
cout<<endl;
}
    return 0;
}



/*
alternative good code
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool comp(pair<int,int> a,pair<int,int>b){
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second; 
}
void function(int arr[],int n){
    unordered_map<int,int> m;
    for(int i = 0 ; i < n ; i++)
    m[arr[i]]+=1;

    vector<pair<int,int>> v;
    copy(m.begin(),m.end(),back_inserter(v));
    sort(v.begin(),v.end(),comp);
    for(int i = 0 ; i < v.size() ; ++i)
    for(int j = 0 ; j < v[i].second ; ++j)
    cout <<v[i].first<<" ";
    cout << endl;
}
int main()
 {
    //code
    int a,n;
    cin >> a;
    while(a--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++ )
        cin >> arr[i];
        function(arr,n);
    }
}

*/