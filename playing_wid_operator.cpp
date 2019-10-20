#include <iostream>

using namespace std;

//adding of 2 objects of same class
/*but the return is not saved is any of the class object*/
class A
{
    public:
    int a,s,m;
    A()
    {
        cout<<"ENTER THE 3 NUMBERS\n";
        cin>>a>>s>>m;
    }
void operator+(A &obja1)
{
    obja1.a=(*this).a+obja1.a;

    obja1.s=(*this).s-obja1.s;

    obja1.m=(*this).m*obja1.m;

    cout<<"THE ADDITION VALUE IS= "<<obja1.a<<"\n";
    cout<<"THE SUBTRACTION VALUE IS= "<<obja1.s<<"\n";
    cout<<"THE MULTIPLICATION VALUE IS= "<<obja1.m<<"\n";
}
};

int main()
{
    A obj1,obj2;
    obj1+obj2;
    return 0;
}
