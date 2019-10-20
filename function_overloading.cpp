#include<bits/stdc++.h>

using namespace std;
void horse(int a,int b,int c)
{
    cout<<"3 integers as arguments "<<a+b+c<<endl;
}
void horse(int a,int b)
{
    cout<<"2 integers as arguments "<<a+b<<endl;
}
void horse(int a,int b,string s)
{
    cout<<"2 integers as arguments and 1 string "<<a+b<<" "<<s<<endl;
}
void horse(int a,string s,int b)
{
    cout<<"2 integers as arguments and 1 string but here string is in middle "<<s<<" "<<a+b;
}
int main()
{
horse(1,2,3);
horse(1,2);
horse(3,7,"khitish");
horse(99,"panigrahi",100);

return 0;
}
