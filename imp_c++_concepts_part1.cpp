#include <iostream>

using namespace std;

int main()
{
    int arr[12] = {1, 5, 8, 9, 6, 0, 3, 4, 2, 99};
    string s="9435";
    int n = sizeof(arr)/sizeof(arr[0]),count=0,br[100];
    float z;

    cout << "Yo bro!!Hello world! size=" <<n<< endl;
    cout<<"here loop starts\n";
    for(int i=0;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"here loop 2 starts\n";
    for(int i=0;arr[i]!='\0';i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    z=stof(s);
    cout<<z<<endl;
    return 0;
}
