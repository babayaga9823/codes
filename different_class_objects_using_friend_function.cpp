#include <iostream>

using namespace std;

class cat;
class dog{
int z;
string d;
public:
    int y;
    string s,r;
    dog()
    {
        cout<<"Enter the dog name : ";
        cin>>s;
        cout<<"Enter the no. baby : ";
        cin>>y;
    }
    friend void totalbaby(dog d,cat c);

};
class cat{
int a;
string h;
public:
int z;
string j,l;
cat()
    {
        cout<<"Enter the cat name : ";
        cin>>j;
        cout<<"Enter the no. baby : ";
        cin>>z;
    }
friend void totalbaby(dog d,cat c);

};

void totalbaby(dog a,cat b)
{
    cout<<"Total no. of babies of dog "<<a.s<<" and cat "<<b.j<<"is "<<a.y+b.z;
}
int main()
{
dog d1;
cat c1;
totalbaby(d1,c1);
    return 0;
}
