#include<iostream>

using namespace std;

class A
{
public:
	void funa()
	{
		cout<<"its funa\n";
	}
	void funb()
	{
		cout<<"its funb CENTER\n";
	}
};

class B:public A
{

	public:
	void funb()
	{
		cout<<"its funb left\n";
	}
};

class C:public A
{

	public:
	void funb()
	{
		cout<<"its funb right\n";
	}
};

class D:public B,public C
{

	public:
	void fund()
	{
		cout<<"its fun D\n";
	}
};

int main()
{	D obj;
	//without using virtual function the code is not running
	/*obj.funb();As expected this will not work as
	there is a ambiquity in the funb as there 2 different copies and both different
	body coding here i have not used the virtual base class concept*/
	obj.fund();
	obj.funb();
	return 0;
}