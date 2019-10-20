#include <iostream>
using namespace std;

class A
{
public:
	int z,*p;

	A()
	{   p=new int;
		cout<<"Enter ";
		cin>>z;
		(*p)=z;
	}
	void ot()
	{
	    cout<<"\t\t"<<p;
	    cout<<"\t\t"<<*p;
	}


	A(A &a)
	{     p=new int;
		
		(*p)=*(a.p);
		cout<<endl<<a.z<<endl;
	}

};

int main()
{
    A b;
    b.ot();
    cout<<"\nfor c\n";
     A c=b;
      cout<<"+++++++++++++++B"<<endl;
      b.ot();
        cout<<"+++++++++++++C"<<endl;
        c.ot();
   return 0;
}
