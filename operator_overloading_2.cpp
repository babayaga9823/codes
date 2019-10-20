#include<iostream>
 using namespace std;

 class A
 {
public:
	int x,y;
	void inp()
	{
		cout<<"ENTER THE VALUE OF X AND Y : ";
		cin>>x>>y;
		cout<<endl;
	}
	A operator +(A a)
	{ A ao;
		ao.x=a.x+x;
		ao.y=a.y+y;
		return ao;
	}

 };

 int main()
 {
 	A a1,a2,a3;
 	a1.inp();
 	a2.inp();
 	a3=a1+a2;
 	cout<<"X="<<a3.x<<" Y="<<a3.y;
 	return 0;
 }
