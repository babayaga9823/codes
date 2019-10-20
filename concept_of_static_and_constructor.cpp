#include<iostream>

using namespace std;

class lol
{
private:
    int a;
public:
    static int b;
    static int c;//here we cannot assign any value to the variables
    static int d;
   get()
    {
        cout<<"ENTER a\n";//a is not static
        cin>>a;
        cout<<"ENTER b\n";//b is static
        cin>>b;

    }

void disp()
{
    cout<<"value of a  "<<a<<"\n";
    cout<<"value of b  "<<b<<"\n";
    cout<<"value of c  "<<c<<"\n";
     cout<<"value of d  "<<d<<"\n";


}


};
int lol::b;//here the value of b has not been assigned and it is taken to be zero by default
int  lol::d=100;//here the value of d has been assigned
int  lol::c=10;//here the value of c has been assigned
int main()
{ lol obj1,obj2,obj3;
    obj1.disp();
    cout<<"\n\n\n";
    obj2.disp();
    cout<<"\n\n\n";
    obj3.disp();
cout<<"\n\nSo from this program we can notice that we can \n"<<"only intialise the contructors with the values we want but we cannot ";
cout<<"take input"<<"\n\n\n";
cout<<"HERE it can be noticed that the a is getting random values \n"<<"becoz the contrcutor is assiging it random values unlike \n"<<"the static integers b,c,d which are either intialised \n"<<"or when they are not intialised as they\n"<<" are staic integers automatically there balue gets intialised by zero\n";
    return 0;



    /*bro u have coded everything wrong*/



}
