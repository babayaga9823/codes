#include <iostream>
using namespace std;

class labour
{

public:
	int cost;
	int hr;
	labour()
	{
		(*this).get();
	}
	void get()
	{
	cout<<"ENTER THE LABOUR CHARGES:";
	cin>>cost;
	cout<<"ENTER THE NUMBER OF HOURSS THE LABOUR HAVE WORKED FOR:";
	cin>>hr;
	}

	void operator* ()
	{
		int t;
		t=((*this).cost)*((*this).hr);
		cout<<t<<endl;
	}

};

int main()
{
	labour l;
	*l;
	/*IT should be notice here that * is coming first and then the object*/
	return 0;
}
