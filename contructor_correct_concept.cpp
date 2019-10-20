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
    void disp();

};

void shape::disp()
{
    cout<<"The radius of circle="<<radius<<" and its name is "<<colour<<endl;
}

int main()
{

    shape c1(3,"dog");/*here it can be noticed that both arguments are being passed*/
    shape c2(4);/*here it can be noticed that only one argument being passed the other argument is being passed by default*/
    shape c3("cat");/*here it can be noticed it will not work becoz no contructor matches*/
    shape c4();/*here it can be noticed it will not work becoz no contructor matches*/
    chape c5;/*here it can be noticed that both arguments are not present so the INBUILT DEFAULT cCONSTRUCTOR is being called*/
    c1.disp();
    c2.disp();
    c3.disp();

    return 0;
}
