#include <iostream>

using namespace std;


class dog{
int z;
string d;
public:
    int y;
    string s,r;
    dog()
    {
        cout<<"Enter the first name : ";
        cin>>s;
        cout<<"Enter the mark : ";
        cin>>y;
    }

};
dog adder(dog &a,dog &b)
{

 a.s=a.s+b.s;
 a.y=a.y+b.y;
 return a;
}
void disp(dog a)
{
    cout<<"The full name is :"<<a.s<<endl;
    cout<<"The total mark is :"<<a.y<<endl;
}
int main()
{
dog d1,d2;
dog d3=adder(d1,d2);
disp(d1);
    return 0;
}
