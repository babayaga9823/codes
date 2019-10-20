#include <iostream>
using namespace std;
class figure
{
public:
	double d;
	void show_area(){};
	void ran(){cout<<"lol";};
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
	 void ran()
    {

        cout<<"ITS A HOUSE INSIDE SQUARE "<<d;
    }

};
class house:public square
{
public:

};
int main()
{
    figure *b;


		circle c;
    square s;
	c.show_area();
	s.show_area();
	house h;
    h.show_area();

   return 0;
}
