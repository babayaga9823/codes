#include<iostream>

using namespace std;

class lol
{
private:
    int a;
public:
     int b;


    put()
    {
        a=1000;
        b=999;

    }get()
    {
       a=0;
       b=20;

    }
void disp()
{
    cout<<"value of a  "<<a<<"\n";
    cout<<"value of b  "<<b<<"\n";

}

};
int main()
{ lol obj1,obj2,obj3;
cout<<"this program is written to clear doubt of--\n"<< "How to differentiate two constructors with the same parameters?\n";
    obj1.disp();
    cout<<"\n\n\n";
    obj2.disp();
    cout<<"\n\n\n";
    obj3.disp();
    cout<<"\n\n\n";
    cout<<"ANSWER IS THAT:: "<< "you can't have two constructors (or any functions) with the same signatures.";






    /*bro u have coded everything wrong*/




    
 return 0;
}
