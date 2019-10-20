#include<iostream>
 using namespace std;

namespace inner
{
	int a;
	void ine()
	{
		cout<<"Enter the value of variable in inner ";
		cin>>a;
	}

	namespace outer
	{
		int b;
		void out()
		{
			cout<<"Enter the value of variable in outer ";
			cin>>b;
				cout<<"The sum= "<<a+b;
		}

	}

}
using namespace inner::outer;
 int main()
 {
     inner::ine();
 	out();
 	return 0;
 }
