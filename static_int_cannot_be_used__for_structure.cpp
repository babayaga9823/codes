#include <iostream>
#include <math.h>

using namespace std;

struct dog
{
    int a;
    string s;
};
static int l=0;
int main()
{
        int z;
        cout<<"Enter the number of structure\n";
        cin>>z;
        struct dog d[z];
        for(int i=0;i<z;i++)
        {
            cout<<"Enter the dog name\n";
            cin>>d[i].s;
            l++;
            d[i].a=l;
        }
        for(int i=0;i<z;i++)
        {
            cout<<"The dog name number is : ";
            cout<<d[i].a;
            cout<<"The dog name is : ";
            cout<<d[i].s;

        }
    return 0;
}
