#include <iostream>

using namespace std;
class hero
{
private:
    int a;
public:
    int x,y;
    string s,r;
    static int c;
    hero()
    {
        cout<<"Enter id : ";
        getline(cin,r);
        cout<<"Enter name : ";
        getline(cin,s);
        a=c+1;
        //cout<<"\n a and c "<<a<<" "<<c<<endl;
        c++;

    }
    ~hero()
    {
        disp();
    }
    void disp();
};
int hero::c;

void hero::disp()
{

    cout<<"order is "<<a;
    cout<<" Name : "<<s;
    cout<<" Roll : "<<r<<endl<<endl<<endl;

}
int main()
{
    int z;
    string zi;
    cout<<"Enter no. of objects : ";
    getline(cin,zi);
    z=stoi(zi);
    hero h[z];
    return 0;
}

