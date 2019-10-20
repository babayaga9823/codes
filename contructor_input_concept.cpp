#include <iostream>
using namespace std;

class dog
{
 public:
double x,y;
string s;
 dog()
 {
 double a,b;
 cout<<"ENTER OBJECT NAME:";
 cin>>s;						/*the input is being taken through the constructor we created*/
 cout<<"ENTER A:";
 cin>>a;
 x=a;
  cout<<"ENTER B:";
 cin>>b;
 y=b;

 }
	void disp()
 {
     cout<<"THE ENTERED NAME OF OBJECT:"<<s<<endl;
 	cout<<"THE ENTERED A OF VALUE:"<<x<<endl;
 	cout<<"THE ENTERED B OF VALUE:"<<y<<endl;
 };


 ~dog()
{

    cout<<"THE ENTERED NAME OF OBJECT DESTROYED:"<<s<<endl;
     cout<<"\n Bhai object is destroyed \n";

}

};


int main()
{
	dog d1,d2;
	d1.disp();
	d2.disp();
	return 0;
	/*SO IT CAN BE NOTICED FROM THIS PROGRAM THAT WE CAN USE THE
	CONSTRUCTOR TO TAKE THE INPUTS directly when the object is being created*/

}
