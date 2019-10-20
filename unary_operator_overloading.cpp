#include<iostream>
 using namespace std;

class A
{
public:
int i,j,l,m,n,p;
void get()
{
    cout<<"ENTER i,j,l\n";
    cin>>i>>j>>l;
}
void get2()
{
    cout<<"ENTER m,n,p\n";
    cin>>m>>n>>p;
}
void operator ++()
{
    i++;
    j--;
    l=l*l;
    cout<<"the value of i "<<i<<endl;
    cout<<"the value of j "<<j<<endl;
    cout<<"the value of l "<<l<<endl;

}

void operator +()
{
    m=m+100;
    n=n*1000;
    p=p*20;
    cout<<"the value of m "<<m<<endl;
    cout<<"the value of n "<<n<<endl;
    cout<<"the value of p "<<p<<endl;

}



};
 int main()
 {
     A a;
     a.get();
     ++a;//note that its the pre increment operator\

     a.get2();
     +a;//here also after the operator the argument is given
     return 0;
 }
