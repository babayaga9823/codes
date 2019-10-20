#include <iostream>
using namespace std;
class human
{
  
  public:
  virtual void intelli()=0;//abstract class as it is pure virtual function
  void brain(){cout<<"Humans have a beautiful brains"<<endl;}
};
class dog
{
   
     public:
      int a;//here we can intialize with any number of our choice
    int b;
     int c;
   virtual void fund(){cout<<"dog"<<endl;}/*declaring virtual would work only for functions
    variables would not affected*/
};
class cat:public dog
{
    public:
     int a=15,b,c,d,e,r;
     void fund(){cout<<"cat"<<endl;}
};
class lion
{
    public:
    int a,b,c,d,e,f;
    char i,j,k,t,w,q;
    void fund(){cout<<"lion"<<endl;}
};
class parrot:public cat,lion
{
    public:
    int a,b,c,d,e,f,g,h;
    char i,j,k;
    void fund(){cout<<"parrot"<<endl;}
};
int main() {
    dog d;
    cat ct;
    ct.fund();
    ct.dog::fund();//loook at this beauty
    ct.a=1000;
    d.a=99;
cout<<"++"<<ct.a<<endl;
cout<<"*d*"<<sizeof(d)<<endl;
cout<<"*c*"<<sizeof(ct)<<endl;
dog *dptr;
dptr=&ct;

//cout<<"the adress contained in the pointer is being printed "<<dptr<<endl;
/*here the dptr has been pointing to random location*/
cout<<"++ptr "<<dptr->a<<endl;/*notice that random number is printed
although it was expected to print
1000 the random value printing is 
due to early binding*/
/*also notice that though it is pointing to dog class the value
99 is not being printed becoz the pointer is not pointing to the object d */
dptr->fund();
/*notice that after declaring virtual in dog class still dptr->a doesnt
give output of 1000 as it could have been expected thus it sjow vitual works
only for functions not variables*/

//human hm;
//hm.brain();
/*
this cannot be done becoz human class is a abstract class
and objects cannot be formed of abstract class
but pointer can created
*/
human *hmn;
//hmn=&d;this cannot be done
cat *cptr;
//cptr=&d;// this is wrong
/* invalid conversion from 'dog*' to 'cat*' [-fpermissive]
 */
//cptr->fund();
  return 0;
}