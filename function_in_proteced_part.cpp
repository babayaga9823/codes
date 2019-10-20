/*
QUESTION::
when the function is in protected and the
classes are derieved publicly
*/
#include <iostream>
using namespace std;

class shape
{
	int n;
protected:
	int x;
	void get()
	{
		cout<<"ENTER THE DIMENSIONS OF THE FIGURE\n";
		cin>>x;
		n=x;
	}
	void area()
	{
		cout<<"ITS BASE CLASS\n";
		/*i have not defined the function
		here knowingly to redefine this function
		when they are inherited in derieved classes */
	}



};

class circle:public shape
{
    public:
	circle()
	{
		(*this).get();//GIVING THE BRACKETS IN THE (*this) IS NECESSARy

		/*HERE I HAVE I TRIED TO DO FUNCTION CALL
		USING CONSTRUCTOR USING "this" pointer*/
	}

	void area()
	{
		cout<<"THE AREA OF THE CIRCLE="<<(3.14*x*x)<<endl;
		/*HERE I HAVE REDEFINED THE FUNCTION WHICH IN INHERITED FROM BASE CLASS */
	}

};

class square:public shape
{
    public:
	square()
	{
		(*this).get();//GIVING THE BRACKETS IN THE (*this) IS NECESSARy
            /*HERE I HAVE I TRIED TO DO FUNCTION CALL
		USING CONSTRUCTOR USING "this" pointer*/
            
		(*this).area();
		   /*HERE I HAVE I TRIED TO DO FUNCTION CALL
		USING CONSTRUCTOR USING "this" pointer 
		IT MEANS I HAVE DIRECTLY CALLED THE area FUNTION HERE*/
		
	}

	void area()
	{
		cout<<"THE AREA OF THE SQUARE="<<(x*x)<<endl;
		/*HERE I HAVE REDEFINED THE FUNCTION WHICH IN INHERITED FROM BASE CLASS */
	}

};


int main()
{
	circle c;
	c.area();
	square s;


	return 0;
}
