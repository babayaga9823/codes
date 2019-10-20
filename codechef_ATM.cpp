#include<bits/stdc++.h>
using namespace std;

int main() {
double del;
double amt=0;
cin>>del>>amt;
//cout<<del<<" ";
//printf("%0.4lf",amt);
if(del>0&&del<=2000&&amt>=0&&amt<=2000)
{
    if(int(del)%5==0&&del+0.5<=amt)
    {
        amt=amt-del-.5;
        printf("%0.2lf",amt);
    }
    else if(del>amt) printf("%0.2lf",amt);
}

	return 0;
}
