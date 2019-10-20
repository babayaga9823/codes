#include<iostream>

using namespace std;

int main()
{
try{
	cout<<"u rule\n";
	throw 999;
}
 catch(int a)
 {	
 	if(a==100)
 	cout<<"i caught it\n";
 else
 	cout<<"Wrong throw";
 }

	return 0;
}