#include<bits/stdc++.h>

using namespace std;

int main()
{
    int z=8;
    int &a=z;
    cout<<" a "<<a<<endl;
    cout<<" z "<<z<<endl;
    cout<<" address of a "<<&a<<endl;
    cout<<" address of z "<<&z<<endl;
    return 0;
}
