#include <bits/stdc++.h>
using namespace std;

void swap(long int &a,long int &b)
{
    long int c;
    c=a;
    a=b;
    b=c;
}

void heapify(vector<long int> &v,long int index)
{
    long int left=0,right=0,min;
    left=2*index;
    right=2*index+1;
    if(v[index]>v[left]&&left<=v.size()-1)//-1 becoz vector size we have one more
    {
        min=left;
    }
    else{
        min=index;
    }
    if(v[min]>v[right]&&right<=v.size()-1)
    {
        min=right;
    }
    swap(v[min],v[index]);
    if(min!=index)heapify(v,min);
}

vector<long int> buildheap(vector<long int> &v)
{
    long int strt=0;
    strt=floor(v.size()/2);
    for(long int i=strt;i>=1;i--)
    {
        heapify(v,i);
    }
    return v;
}

void deleted(vector<long int> &v)
{
    //cout<<"++"<<v.back();
    swap(v[1],v[v.size()-1]);//-1 becoz indexing starting from 1 not 0
    //cout<<"++"<<v.size();
    // cout<<"\n++"<<v.back()<<endl;
    v.pop_back();
  // cout<<"\n++"<<v.back()<<endl;
    buildheap(v);
}
void deletedindx(vector<long int> &v,long int z)
{
    //cout<<"++"<<v.back();
    int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==z)break;
    }
    
    swap(v[i],v[v.size()-1]);//-1 becoz indexing starting from 1 not 0
    //cout<<"++"<<v.size();
    // cout<<"\n++"<<v.back()<<endl;
    v.pop_back();
  // cout<<"\n++"<<v.back()<<endl;
    buildheap(v);
}
void insert(vector<long int> &v,long int z)
{
  v.push_back(z);
  buildheap(v);
}
void disp(vector<long int> &v)
{
    //cout<<"Entered v size "<<endl;
cout<<v[1]<<endl;//here index is not zero becoz we have taken to indexing start from 1
}
int main() {

long int q=0;
cin>>q;
vector<long int> v;
v.push_back(0);
for(long int i=0;i<q;i++)
{
long int op=0;
cin>>op;
if(op==1)
{
long int z;
cin>>z;
insert(v,z);
}
else if(op==2)
{
long int z;
cin>>z;
deletedindx(v,z);
}
else{
    disp(v);
}
}


    return 0;
}
