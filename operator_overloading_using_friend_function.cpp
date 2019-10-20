#include<iostream>

using namespace std;
class base
{
	static int c;
public:
	int z;
	base()
	{
		cout<<"Enter the value of z of object : "<<c<<endl;
		cin>>z;
		c++;
	}
	friend void operator+(base &b1,base &b2);

};
int base::c=1;
void operator+(base &b1,base &b2)
	{
		b1.z=b1.z+b2.z;
	}
int main()
{
base ob1,ob2;
ob1+ob2;
cout<<ob1.z;
return 0;
}