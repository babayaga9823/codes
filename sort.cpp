#include<iostream>
using namespace std;

namespace create
{
	int z;
	void inp()
	{
		cout<<"Enter the value of Z\n";
		cin>>
		z;

	}
	class dog
	{
	public:
		void disp()
		{
			cout<<"Its dog no. "<<z;
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
