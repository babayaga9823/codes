#include <iostream>
using namespace std;

int main() {
int n,q,i,j,c=0,b[1000];
string s[1000],a[1000];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s[i];
}
cin>>q;
for(i=0;i<q;i++)
{c=0;
    cin>>a[i];
    for(j=0;j<n;j++)
    {
        if(a[i]==s[j])
        {
            
            c++;
        }
    }
    b[i]=c;
}
for(i=0;i<q;i++)
{
    cout<<b[i]<<endl;
}
    return 0;
}