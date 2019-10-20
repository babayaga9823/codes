#include<bits/stdc++.h>

using namespace std;

class man
{
    int a;
    string k;
public:
    int z;
    string s;
    man()
    {
        cout<<"z ";
        cin>>z;
        cout<<"\n s :";
        cin>>s;
        cout<<endl;
    }

};
class baby:public man
{

public:
    int age;
    string babyname;
    baby()
    {
        cout<<"Age : ";
        cin>>age;
        cout<<"\n baby name : ";
        cin>>babyname;
        cout<<endl;
    }
};
void disp(baby b)
{
    cout<<"Father name : "<<b.s<<endl;
    cout<<"Father age : "<<b.z<<endl;
    cout<<"Child name : "<<b.babyname<<endl;
    cout<<"Child age : "<<b.age<<endl;

}

int main()
{
baby j;
disp(j);
return 0;
}

