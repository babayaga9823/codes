#include<iostream>
 using namespace std;

 class A
 {
public:
	int x,y;
	A()
	{
		cout<<"ENTER THE VALUE OF X AND Y : ";
		cin>>x>>y;
		cout<<endl;
	}
	void operator ++(int z)
	{
		x=10*x;
		y=100*y;

	}
void operator ++()
	{
		x=2*x;
		y=20*y;

	}
 };

 int main()
 {
 	A a1;
 	a1++;
 	cout<<"X="<<a1.x<<" Y="<<a1.y<<endl;
 	++a1;
 	cout<<"X="<<a1.x<<" Y="<<a1.y;
 	return 0;
 }
