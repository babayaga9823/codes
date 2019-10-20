#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

class hero
{

    int z;
    string s,dum;
public:
    string x,y;
    hero()
    {
        cout<<"Hi the constructor has been called\n";
        cout<<"Enter ur name\n";
        getline(cin,s);
        cout<<"Enter ur id\n";
        getline(cin,dum);
        x=s;
        y=dum;

    }
    void disp();
};
void hero::disp()
{

    cout<<dum<<endl;
    cout<<s<<endl;
}
bool comp(hero h1,hero h2)
{
    return (h1.y)<(h2.y);
}
int main()
{

int z;
string r;
cout<<"Enter the no. of objects\n";
getline(cin,r);
z=stoi(r);
hero h[z];
int i=0;
sort(h,h+z,comp);
cout<<endl<<endl<<endl<<endl;
while(i<z)
{
    h[i].disp();
    cout<<endl<<endl;
    i++;

}
    return 0;
}
