#include<iostream>
using namespace std;

class B
{
    public:
    int a;
    B()
    {
        cout<<"ENTER a\n";
        cin>>a;
    }
    void show()
    {
        cout<<"ITS IN BASE CLASS\n";
    }
};

class D:public B
{
    public:
    int l;
   D()
    {
        cout<<"ENTER l\n";
        cin>>l;
    }
    void show()
    {
        cout<<"ITS IN DERIEVED CLASS\n";
    }

};

int main()
{
    B bs;
    D dr;
    /*IT CAN BE NOTICED THAT HERE THE BASE CLASS 
    CONNTRUCTOR IS BEING AGAIN CALLED BY THE DERIEVED CLASS 
    BECAUSE
    "Base class constructors are always called in the derived class constructors. 
    Whenever you create derived class object, first the base class default constructor 
    is executed and then the derived class's constructor finishes execution." 

    THE ABOVE IS THE EXPLANATION FOR WHY THE BAASE CLASS CONSTRUCTOR IS BEING CALLED 2 TIMES
    */
   
    B *p;
    p=&bs;
    (*p).show();//this is for pointing base class
    cout<<"NOW THE POINTER HAS BEEN ASSIGNED TO POINT DERIEVED CLASS D\n";
    p=&dr;
    (*p).show();
    /*here it can be noted that the pointer here altough is base class pointer  and it is assigned to 
    derieved class .....so now it should point derived class but it still points base class 
    because of early binding(where the compiler doesnt check the pointer points to what...
    instead it just checks pointer is of which type)*/

}
