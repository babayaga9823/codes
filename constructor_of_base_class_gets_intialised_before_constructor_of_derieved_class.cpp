#include<iostream>

using namespace std;

class A
{
    public:
    int i,j;
    A()
    {
        cout<<"BASE CLASS A IS BEING INTIALISED HERE input the i and j\n";
        cin>>i,j;
    }
    void dog()
    {
        cout<<"I RULE CLASS A\n";
    }
};

class B: public A
{
public:
    void dog()
    {
        cout<<"I RULE CLASS B\n";
    }
};

int main()
{
    B b;
    /*THE OUTPUT IS ACCORDING TO THING I PREDICTED 
    AS WE HAVE NOT EVEN MADE A OBJECT OF CLASS A BUT
    THE CONSTRUCTOR OF CLASS A IS BEING CALLED AUTOMATICALLY THIS 
    SHOWS THAT BEFORE THE DERIEVED CLASS THE BASE CLASS CONSTRUCTOR
    IS BEING FORMED*/

}
