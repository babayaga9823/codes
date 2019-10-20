#include<iostream>

using namespace std;
class base
{
	

public:
	int z;
	base()
	{
		cout<<"Enter the value of z\n";
		cin>>z;
	}
	void operator++(int l)
	{
		z=z+1000;
	}

};

int main()
{
base b;
b++;
cout<<b.z;
return 0;
}