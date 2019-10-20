//
// Created by Aameer on 14/09/18.
//



#include <iostream>
using namespace std;
class Container
{
public :
    double s ;
    virtual void volume() = 0 ;
    Container(){} ;
};
class Sphere : public Container
{
public :
    Sphere(){} ;
    Sphere(double a)
    {
        s = a ;
    }
    void volume()
    {
        cout << "The volume of Sphere is " << (1.33 * 3.14 * s * s * s) << endl ;
    }
};
class Cube : public Container
{
public :
    Cube(){} ;
    Cube(double a)
    {
        s = a ;
    }
    void volume()
    {
        cout << "The Volume of Cube is " << (s * s * s) << endl ;
    }
};
int main()
{
    double f , f1 ;
    cout << "Enter sides of the Cube\n" ;
    cin >> f ;
    Container *obj= new Cube(f);
    obj->volume();

    cout << "Enter the radius of the sphere\n" ;
    cin >> f1 ;
    Container *obj1= new Sphere(f1);
    obj1->volume();


    return 0 ;
}
