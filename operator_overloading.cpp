#include <iostream>
using namespace std;

/*its done using memeber function*/

class total
{
public:
	int t,e;

	void get()
	{
		cout<<"THE TOTAL TIME TAKEN:"<<t<<endl;

		cout<<"THE TOTAL EXPENCES:"<<e<<endl;

	}


};

total to;


class bus
{
public:
	int t,e;
	bus()
	{
		(*this).get();
	}
	void get()
	{
		cout<<"ENTER THE TIME TAKEN IN BUS:";
		cin>>t;
		cout<<"ENTER THE TOTAL EXPENCES IN BUS:";
		cin>>e;

	}


};

class train
{
public:
	int t,e;
	train()
	{
		(*this).get();
	}
	void get()
	{
		cout<<"ENTER THE TIME TAKEN IN TRAIN:";
		cin>>t;
		cout<<"ENTER THE TOTAL EXPENCES IN TRAIN:";
		cin>>e;

	}
total operator + (bus l)
{

to.t=(*this).t+l.t;
to.e=(*this).e+l.e;
 return to;
}


};

int main ()
{   cout<<"ENTER THE TIME IN MINUTES\n";
	train t;
	bus b;
	total s;
	s=t+b;

	to.get();
	return 0;
}
