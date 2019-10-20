#include<iostream>
 using namespace std;

template <class T>
class A
{
public:
    T t;
A()
{
    cout<<"Enter the number to calculate factorial: ";
    cin>>t;
}
void funa()
 {
    T z;
    z=t;
    while(t>1)
    {
        z=z*(t-1);
        t--;
    }
    if(z==0)
    {
       cout<<"value= 1";

    }
    else{cout<<"value= "<<z;
    }
 }
};
int main()
{
    A<float> a;
    a.funa();
    return 0;
}
