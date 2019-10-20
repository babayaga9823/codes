#include<bits/stdc++.h>

using namespace std;
class hero
{
int a;
public:
    hero(int a)
    {
        (*this).a=a+99;
        cout<<(*this).a<<endl;
    }
};
int main()
{
    hero h(100);
    return 0;
}
