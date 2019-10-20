#include<iostream>
 using namespace std;

template <class T>T funa(T &t)
 {
 	T z;
 	z=t;
 	while(t>1)
 	{
 		z=z*(t-1);
 		t--;
 	}
 	if(z==0)
    {
       cout<<"value= 1";
       return 1;
    }
    else{cout<<"value= "<<z;
    return z;}

 }
int main()
{	int z,d;
	cout<<"Enter the number to calculate factorial: ";
 	cin>>z;
 	d=funa(z);
    cout<<"\nthe return = "<<d;
return 0;
}
