#include <iostream>

using namespace std;

//adding of 2 objects of same class
/*here I am saving the output of operartor function in another object*/
class A
{
    public:
    int a,s,m;
    void input()
    {
        cout<<"ENTER THE 3 NUMBERS\n";
        cin>>a>>s>>m;
    }
A operator+(A &obja1)
{
    A obja2;
    obja2.a=(*this).a+obja1.a;

    obja2.s=(*this).s-obja1.s;

    obja2.m=(*this).m*obja1.m;

    return obja2;

}
};

int main()
{
    A obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj1+obj2;

    cout<<"THE ADDITION VALUE IS= "<<obj3.a<<"\n";
    cout<<"THE SUBTRACTION VALUE IS= "<<obj3.s<<"\n";
    cout<<"THE MULTIPLICATION VALUE IS= "<<obj3.m<<"\n";
    return 0;
}
