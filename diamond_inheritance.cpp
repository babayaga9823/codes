#include <iostream>
using namespace std;


class A
{
public:
    int a=10;
    void disp()
    {
        cout<<"ITS BASE CLASS\n";
    }
};

class B:virtual public A
{
   public:
    int b=20;
    
};

class C:virtual public A
{
   public:
    int c=30;
};

class D:public B,public C
{
   public:
    int d=40;
};



int main()
{
    B b;
    C c;
    D d;
    cout<<"CLASS B:"<<b.a<<endl;
    cout<<"CLASS B:"<<b.b<<endl;
    cout<<"CLASS C:"<<c.a<<endl;
    cout<<"CLASS C:"<<c.c<<endl;
    cout<<"CLASS C:"<<d.a<<endl;
    d.disp();
    return 0;
}


/*#include <iostream>
using namespace std;


class A
{
public:
    int a=10;
    void disp()
    {
        cout<<"ITS BASE CLASS\n";
    }
};

class B:virtual public A
{
   public:
    int b=20;
    void disp()
    {
        cout<<"ITS DERIEVED CLASS B\n";
    }
};

class C:virtual public A
{
   public:
    int c=30;
    void disp()
    {
        cout<<"ITS DERIEVED CLASS C\n";
    }
};

class D:public B,public C
{
   public:
    int d=40;
};



int main()
{
    B b;
    C c;
    D d;
    cout<<"CLASS B:"<<b.a<<endl;
    cout<<"CLASS B:"<<b.b<<endl;
    cout<<"CLASS C:"<<c.a<<endl;
    cout<<"CLASS C:"<<c.c<<endl;
    cout<<"CLASS C:"<<d.a<<endl;
    d.disp();
    return 0;
}





here it can be noticed that virtual base class works
only when the function in the base class is not redefined in 
the derieved class B and class C....
if we redefine then it will not work...













*/