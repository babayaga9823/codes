#include <iostream>
using namespace std;

/*ITS NOT WORKING*/
class bus
{
public:
	int tb,eb;
	bus()
	{
		(*this).get();
	}
	void get()
	{
		cout<<"ENTER THE TIME TAKEN IN BUS:";
		cin>>tb;
		cout<<"ENTER THE TOTAL EXPENCES IN BUS:";
		cin>>eb;

	}


}b;

class train
{
public:
	int tt,et;
	train()
	{
		(*this).get();
	}
	void get()
	{
		cout<<"ENTER THE TIME TAKEN IN TRAIN:";
		cin>>tt;
		cout<<"ENTER THE TOTAL EXPENCES IN TRAIN:";
		cin>>et;

	}

};

class total:public bus,public train
{
public:
	int ts,es;


	total operator + ()
{
ts=tt+tb;
es=et+eb;
 return *this;
}


	void get()
	{
		cout<<"THE TOTAL TIME TAKEN:"<<ts<<endl;

		cout<<"THE TOTAL EXPENCES:"<<es<<endl;

	}


};







int main ()
{   cout<<"ENTER THE TIME IN MINUTES\n";
	train t;
	bus b;
	total s;
	s+;
	to.get();
	return 0;
}
