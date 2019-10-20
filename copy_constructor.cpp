#include<iostream>

using namespace std;

class base
{
public:
int i,j,l;
base()
{
    cout<<"ENTER THE 3 NUMBERS\n";
    cin>>i,j,l;
}
void funa()
{
    cout<<"ITS THE ORIGINAL BASE CLASS function 1\n";
}


void funb()
{
    cout<<"ITS THE ORIGINAL BASE CLASS function 2\n";
}

};
int main()
{
    base d;
    base b(d);
    b.funa();
//most simple form using the default copy constructor
    return 0;
}
