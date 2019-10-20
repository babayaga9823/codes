#include<iostream>
 using namespace std;

template <class T,class X>
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
 void add()
 {X x;
     cout<<"Enter the value of x ";
     cin>>x;
     cout<<"value= "<<x*100;
 }
};
int main()
{

    A<float,float> a;
	a.funa();
	a.add();
    return 0;
}
