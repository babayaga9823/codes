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
base (base &b)
{
    b.i=i;
    b.j=j;
    b.l=l;
}
};
int main()
{
    base d;
    base b(d);
    b.funa();
//most simple form but its usser defined copy constructor
    return 0;
}

