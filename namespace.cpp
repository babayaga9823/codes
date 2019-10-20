//function to find the largest in a array

#include<iostream>
using namespace std;

namespace create
{
	int z;
	void inp()
	{
		cout<<"Enter the value of Z\n";
		cin>>create::z;

	}
	class dog
	{
	public:
		void disp()
		{
			cout<<"ITS dog no. "<<z;
		}
	};
}
namespace ct=create;
int main()
{
	ct::inp();
	ct::dog d;
	d.disp();
	return 0;
}