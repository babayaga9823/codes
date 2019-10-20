#include <iostream>
using namespace std;
class figure
{
public:
	double d;
	void virtual show_area()=0;
};
class circle:public figure
{
public:
	circle()
	{
		cout<<"Enter value of d ";
		cin>>d;
		cout<<endl;
	}
	void show_area()
	{
		cout<<"the area is = "<<3.14*d*d;
	}

};
class square:public figure
{
public:
	square()
	{
		cout<<"Enter value of d ";
		cin>>d;
		cout<<endl;
	}
	void show_area()
	{
		cout<<"\nthe area is = "<<d*d;
	}

};

int main()
{
	circle c;
	square s;
	c.show_area();
	s.show_area();

   return 0;
}
