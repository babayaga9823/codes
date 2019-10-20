#include <iostream>

using namespace std;
 class A
 {

 public:
    void dog()
    {
        cout<<"ITS BASE CLASS DOG\n";
    }

 };

 class B: public A
 {

 public:
     void dog()
     {
        cout<<"ITS DERIEVED CLASS DOG B\n";
     }

 };


 class C: public A
 {

 public:
     void dog()
     {
        cout<<"ITS DERIEVED CLASS DOG C\n";
     }

 };

  class D: public B,public C
 {

 public:
     void dog()
     {
        cout<<"ITS DERIEVED CLASS DOG D\n";
     }

 };
int main()
{
    /*
    in this program i m just trying to figure out that in diamond inheritance 
    if all the classes have a function wid same name and also wid same prototype but only vary wid 
        the coding part then which of the function is executed I m testing that.
    */
    B b;
    A a;
    D d;
    d.dog();
    cout<<"***\n";
    d.B::dog();
    cout<<"***\n";
    a.dog();
    b.dog();
    return 0;
}
