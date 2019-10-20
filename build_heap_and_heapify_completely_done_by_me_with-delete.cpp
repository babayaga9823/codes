#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

void heapify(vector<int> &v,int index)
{
    int left=0,right=0,max;
    left=2*index;
    right=2*index+1;
    if(v[index]<v[left]&&left<=v.size()-1)//-1 becoz vector size we have one more
    {
        max=left;
    }
    else{
        max=index;
    }
    if(v[max]<v[right]&&right<=v.size()-1)
    {
        max=right;
    }
    swap(v[max],v[index]);
    if(max!=index)heapify(v,max);
}

vector<int> buildheap(vector<int> &v)
{
    int strt=0;
    strt=floor(v.size()/2);
    for(int i=strt;i>=1;i--)
    {
        heapify(v,i);
    }
    return v;
}

void deleted(vector<int> &v)
{
    //cout<<"++"<<v.back();
    swap(v[1],v[v.size()-1]);//-1 becoz indexing starting from 1 not 0
    //cout<<"++"<<v.size();
    // cout<<"\n++"<<v.back()<<endl;
    v.pop_back();
  // cout<<"\n++"<<v.back()<<endl;
    buildheap(v);
}
int main() {
	vector<int>v;
	int n;
	cin>>n;
	v.push_back(0);//becoz we are starting the index from 1 not zero
	for(int i=1;i<=n;i++)
	{
	    int z;
	    cin>>z;
	    v.push_back(z);
	}
v=buildheap(v);
	for(int i=1;i<=n;i++)
	{
	    cout<<v[i]<<" ";
	}
	cout<<endl;
	char ch='d';
	while(ch=='c')
	{
	    
	    cout<<endl;
	    int z;
	    cin>>z;
	    v.push_back(z);
	    cout<<"to continue entering press c : ";
	    cin>>ch;
	}
	deleted(v);
//	cout<<"++"<<v.size()<<endl;

		for(int i=1;i<v.size();i++)
	{
	    cout<<v[i]<<" ";
	}
	return 0;
}