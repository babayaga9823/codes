#include<iostream>
using namespace std;

template<class T>T sum(T a,T b)
{
	T c;
	c=a+b;
	return c;
}

int main()
{
	int f,r,m;
	cin>>f>>r;
	m=sum(f,r);
	cout<<m;
	return 0;

}
