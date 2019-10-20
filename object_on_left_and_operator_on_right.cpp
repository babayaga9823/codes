#include <iostream>

using namespace std;

class A
{
    public:
    int a,s,m;
   void get()
    {
        cout<<"ENTER THE 3 NUMBERS\n";
        cin>>a>>s>>m;
    }
void operator+(int z=0)
{
    a=a+10;
    s=s-10;
    m=m*10;
    cout<<"THE ADDITION VALUE IS= "<<a<<"\n";
    cout<<"THE SUBTRACTION VALUE IS= "<<s<<"\n";
    cout<<"THE MULTIPLICATION VALUE IS= "<<m<<"\n";
}
};

int main()
{
    A obj1;
    obj1.get();
    obj1+;
    return 0;
}
