#include <iostream>
using namespace std;

class shape
{
    public:
    double radius;
    string colour;
    shape(double r=2,string c = "red")
    {
        radius=r;
        colour=c;
    };
shape(double x)
    {
        radius=x;
        colour="TIGER HAI TU";
    }
    void disp();

};

void shape::disp()
{
    cout<<"The radius of circle="<<radius<<" and its name is "<<colour<<endl;
}

int main()
{

    shape c1(3,"dog");/*here it can be noticed that both arguments are being passed*/
    shape c2(4.9);/*here it can be noticed that only one argument being passed the other argument is being passed by default*/
    shape c5;/*here it can be noticed that both arguments are not present so the INBUILT DEFAULT cCONSTRUCTOR is being called*/
    c1.disp();
    c2.disp();
    c5.disp();




    /*here the above code will not work vecoz there is a ambiquity between the constructors
        
        the error shown will be:call of overloaded 'shape(double)' is ambiguous|

    */

    return 0;
}
