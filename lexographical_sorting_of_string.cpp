#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

bool comp(string a,string b)
{
    return a<b;
}
static int a;
int main()
{
        string s[10];
        for(int i=0;i<3;i++)
        {
            cout<<"Enter the string\n";
            cin>>s[i];

        }
        sort(s,s+3,comp);
         for(int i=0;i<3;i++)
        {
            cout<<s[i]<<" ";

        }
        cout<<endl;

    return 0;
}
