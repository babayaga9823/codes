#include <iostream>
using namespace std;

class circle
{
public:
    int d;
	circle()
	{
		cout<<"Enter value of d ";
		cin>>d;
		cout<<endl;
	}
	void show_area()
	{
		cout<<"the area is = "<<3.14*d*d;
		cout<<endl;
	}

};

int main()
{
	circle *c;
	int z;
	cout<<"enter the number of objects u want to create\n";
	cin>>z;
	c=new circle[z];
	int i=0;
	while(i<z)
    {
        (*c).show_area();
        i++;
        c++;
    }

   return 0;
}
