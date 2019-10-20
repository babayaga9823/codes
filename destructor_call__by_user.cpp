#include<iostream>

using namespace std;

class base
{
	int n;
public:
	base()
	{
		cout<<"ENTER A NUMBER\n";
		cin>>n;
	}
	void dog()
	{
		cout<<"DOG  IS BEING CALLED\n";
	}
	~base()
	{
		cout<<"DESTRUCTOR IS BEING CALLED BY USER\n";
	}

};


int main()
{
	base b;
	b.dog();
	//~b;
	/*the above line will show error
	it means the destructor cannot be exoliciltly called by
	user*/
	base c;
	return 0;
}