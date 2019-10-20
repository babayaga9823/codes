#include<iostream>
/*with USING virtual function*/

using namespace std;
class base
{
public:
virtual void dog()
{
	cout<<"ITS BASE CLASS DOG\n";
}
};


class derieved1:public base
{
public:
virtual void dog()
{
cout<<"ITS DERIEVED CLASS 1 DOG\n";
}
};
class derieved2:public base
{
public:
virtual void dog()
{
cout<<"ITS DERIEVED CLASS 2 DOG\n";
}
};
int main()
{
base *b;
derieved1 d;
b=&d;
(*b).dog();
derieved2 e;
b=&e;
(*b).dog();
	return 0;
}
