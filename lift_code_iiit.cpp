#include <iostream>
using namespace std;

int main()
{
    double T,N,V1,V2,t1,t2;
    int i=0;
    cin>>T;
    while(i<T)
    {
    cin>>N>>V1>>V2;
    t1=(2*N)/V2;
    t2=(1.41*N)/V1;
    if(t1<=t2)
    {
        cout<<"lift\n";
    }
    else{cout<<"stair\n";}

        i++;
    }


	return 0;
}
