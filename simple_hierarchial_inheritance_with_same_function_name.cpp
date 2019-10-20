#include <iostream>

using namespace std;
class base
{
    int a;
    string b;
    public:
    base()
    {
        cout<<"\n a no. base ";
        cin>>a;
        cout<<"\n b string base ";
        cin>>b;
    }
    void func()
    {
        cout<<"Its base class"<<endl;
    }
};
class derieved1
{

    int c;
    string d;
public:
    derieved1()
    {
        cout<<"\n c no. derieved 1 ";
        cin>>c;
        cout<<"\n d string derieved 1 ";
        cin>>d;
    }
    void func()
    {
        cout<<"Its derieved 1 class"<<endl;
    }
};
class derieved2 : public derieved1,public base
{
    int e;
    string f;
    public:
    derieved2()
    {
        cout<<"\n c no. derieved 2 ";
        cin>>e;
        cout<<"\n d string derieved 2 ";
        cin>>f;
    }
void func()
    {
        cout<<"Its derieved 2 class"<<endl;
    }
};
int main()
{
    derieved2 d2;
    base *b;
    derieved1 *d1;
    b=&d2;
    d1=&d2;
    (*b).func();
    (*d1).func();
    d2.func();
        return 0;
}
