#include<bits/stdc++.h>
using namespace std;
class parent
{
    void pripar()
    {
        cout<<"private parent\n";
    }
public:
int a;
void par();
void dog();
void callpripar()
    {
        pripar();
    }
};

class child : public parent
{   
     void priparchi()
    {
        cout<<"private parent\n";
    }
    
    public:
    int c;
    void chi();
    void dog();
    void callpripar()
    {   
        cout<<"calling private from child\n";
       priparchi();
    }
    
};
void parent::par()
{
    cout<<"Hi its parent \n";
    dog();
}
void parent::dog()
{
    cout<<"Hi its parent dog \n";
}
void child::chi()
{
    cout<<"Hi its child class \n";
}
void child::dog()
{
    cout<<"Hi its child dog \n";
}
int main()
{
    parent p;
    child c;
    p.par();
    c.callpripar();
    //p.callpripar();;
    return 0;
}















