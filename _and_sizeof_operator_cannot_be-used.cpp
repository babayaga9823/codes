#include <iostream>

using namespace std;
int sumarray(int a[])
{
    int z=10,s=0;
    //z=sizeof(a)/sizeof(a[0]);//this size of operator works only inside main function
    cout<<z<<endl;
    for(int i=0;i<z;i++)
    {
        s+=a[i];
    }
return s;
}
int main()
{
    int ar[]={1,2,3,4,5,6,7,8,9,10};
    cout<<sumarray(ar);
    return 0;
}
