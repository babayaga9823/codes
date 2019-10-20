#include<iostream>
/*without USING virtual function*/

using namespace std;
class base
{
public:
void dog()
{
	cout<<"ITS BASE CLASS DOG\n";
}
};


class derieved:public base
{
public:
void dog()
{
cout<<"ITS DERIEVED CLASS DOG\n";
}
};

int main()
{
base *b;
derieved d;
(*b).dog();
	return 0;
}