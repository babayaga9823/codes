{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int k)
{
    int i;
    queue<ll> myq;
    vector<ll>v;
    for(i=0;i<k;i++)
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    int s=v.size();
    for(i=0;i<s;i++)
    {
        myq.push(v[i]);
    }
    while(!q.empty())
    {
        myq.push(q.front());
        q.pop();
    }
    return myq;
}