#include <iostream>
using namespace std;
class Figure
{
public :
    double s ;
    virtual void show_area() = 0 ;
    Figure(){} ;
};
class Circle : public Figure
{
public :
    Circle(){} ;
    Circle(double a)
    {
        s = a ;
    }
    void show_area()
    {
        cout << "The area of Circle is " << (3.14 * s * s) << endl ;
    }
};
class Square : public Figure
{
public :
    Square(){} ;
    Square(double a)
    {
        s = a ;
    }
    void show_area()
    {
        cout << "The area of square is " << (s * s) << endl ;
    }
};
int main()
{
    double f , f1 ;
    cout << "Enter sides of the square\n" ;
    cin >> f ;
    Figure *obj=new Square(f);
    obj->show_area();
    cout << "Enter the radius of the circle\n" ;
    cin >> f1 ;
    Figure *obj1=new Circle(f1);
    obj1->show_area();
    return 0 ;
}
