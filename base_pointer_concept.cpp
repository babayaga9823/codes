#include<iostream>

using namespace std;

class A
{
    public:
    void dog()
    {
        cout<<"I RULE CLASS A\n";
    }
};

class B: public A
{
public:
    void dog()
    {
        cout<<"I RULE CLASS B\n";
    }
};

class C: public A, public B
{
public:
    void dog()
    {
        cout<<"I RULE CLASS C\n";
    }
    void cat()
    {
        cout<<"THIS IS A CAT\n";
    }
};

class D: public A, public B,public C
{
public:
    void dog()
    {
        cout<<"I RULE CLASS D\n";
    }
    void cat()
    {
        cout<<"THIS IS A CAT\n";
    }
    void man()
    {
        cout<<"THIS IS A MAN IN CLASS D";
    }
};
int main()
{
A a;
B b;
C c,c2;
c.dog();/*the dog function has been redefined in every
derieved class and after re defining the function only
is present in the derieved class instead of all version of dog
function from different derieved class*/
A *ptra;
ptra=&b;
b.dog();
/*
ptra=&c2;
c2.cat();
this code is not gonna work
becoz its showing umbiquos base
error
*/
B *ptrb;
ptrb=&c2;
c2.cat();

/*SO it can be noted from this code that
pointer only points to a level down
mane aethi jadi bhi mu A class ra pointer karuchi then
sae pointer ta B class ku point kari pariba but C class ku point kari
paribani
Similary
jadi bhi mu B class ra pointer karuchi then
sae pointer ta C class ku point kari pariba
*/
/*

D d;
ptrb=&d;
ptrb.man();
same error as I was saying
*/
D d;
C *ptrc;
ptrc=&d;
d.man();
}
