#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
   int a,b,c,x,y,z,fined=0;
    cin>>x>>y>>z;//actual
    cin>>a>>b>>c;//expected
 
 
    if(c==z)
    {
        if(b==y)
        {
           
            if(a<=x)
            {
                fined=(x-a)*15;
                cout<<fined<<endl;
            }
            else{cout<<"0"<<endl;}
        }
        else if(b<y)
        {
            fined=(y-b)*500;
            cout<<fined<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    else if(c<z){
        cout<<"10000"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    
    
    return 0;
}
