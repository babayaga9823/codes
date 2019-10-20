#include<iostream>
/*ITS NOT WORKING HERE I HAVE NOT USED THE VIRTUAL BASE CLASS CONCEPT*/

using namespace std;
/*HERE I HAVE NOT REDEFINED THE funb IN OTHER DERIEVED CLASSES SO
THERE IS NO AMBIQUITY ERROR
HERE I HAVE ALSO USED THE VIRTUAL BASE CLASS CONCEPT*/
class A
{
public:
	int a;
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
	void funbe()
	{
		cout<<"its funb left\n";
	}
};

class C:public A
{

	public:
		int a;
	void funbw()
	{
		cout<<"its funb right\n";
	}
};

class D:public B,public C
{

	public:
		int a;
		D()
		{
			cout<<"lol\n";
			cin>>a;
		}
	void fund()
	{
		cout<<"its fun D\n";
	}
};

int main()
{
	D obj;

	obj.funb();
	cout<<obj.a;
	return 0;
}