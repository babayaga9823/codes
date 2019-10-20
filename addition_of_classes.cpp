#include<iostream>
 using namespace std;
class B;
class C;
 class A
 {
public:
	int x,y;
	void inp()
	{
		cout<<"ENTER THE VALUE OF X AND Y : ";
		cin>>x>>y;
		cout<<endl;
	}
	C friend operator +(A a,B b);

 };
 class B
 {
public:
	int x,y;
	void inp()
	{
		cout<<"ENTER THE VALUE OF P AND Q : ";
		cin>>x>>y;
		cout<<endl;
	}
	C friend operator +(A a,B b);

 };
 class C
 {
public:
	int x,y;
	C friend operator +(A a,B b);

 };

 C operator +(A p,B q)
 {
     C z;
     z.x=p.x+q.x;
     z.y=p.y+q.y;
     return z;


 }
 int main()
 {
A a;
B b;
C c;
a.inp();
b.inp();
c=a+b;
	cout<<"X="<<c.x<<" Y="<<c.y;
 	return 0;
 }
