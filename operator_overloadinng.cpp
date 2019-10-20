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
	void operator +(A a)
	{
		x=a.x+x;
		y=a.y+y;
		cout<<"X="<<x<<" Y="<<y;


	}

 };

 int main()
 {
 	A a1,a2;
 	a1+a2;
 	return 0;
 }
