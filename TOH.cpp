/**3.1  Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. Write a program to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk.**/
#include<iostream>
using namespace std;

TOH(int n,char l,char m,char r)
{
	if(n==1)
		cout<<"move from "<<l<<" to "<<r<<endl;
	else
	{
		TOH(n-1,l,r,m);
		cout<<"move from "<<l<<" to "<<r<<endl;
		TOH(n-1,m,l,r);
	}
}
int main()
{	int n;
	cout<<"enter n\n";
	cin>>n;
	TOH(n,'L','M','R');
	return 0;
}
