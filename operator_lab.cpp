#include <iostream>
using namespace std;

class oper
{
protected:
    int a;
public:
    int t;
    oper()
    {
    	cout<<"ENTER a=";
    	cin>>a;

	};
    int operator + (oper &p)
    {
        t=p.a+(*this).a;
        cout<<"THE SUM= "<<t<<endl;
        return t;
    }
    int operator -(oper &p)
    {
        t=(*this).a-p.a;
        cout<<"THE SUBTRACTION= "<<t<<endl;
        return t;
    }
     int operator *(oper &p)
    {
        t=p.a*(*this).a;
        cout<<"THE MULTIPLICATION= "<<t<<endl;
        return t;
    }
     int operator /(oper &p)
    {
        t=(*this).a/p.a;
        cout<<"THE DIVISION= "<<t<<endl;
        return t;
    }

};

int main()
{
    oper opp1,opp2;
    int z;
     z=opp1-opp2;
    z=opp1+opp2;

      z=opp1*opp2;
       z=opp1/opp2;

    return 0;
}
