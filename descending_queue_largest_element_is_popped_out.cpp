#include <bits/stdc++.h>
using namespace std;
vector<int>v;
void enque()
{int z=0;
        cout<<"Enter element to be pushed : ";
        cin>>z;
    v.push_back(z);
}
void dequee()
{
    if(v.empty())cout<<"Under flow"<<endl;
    else
    {
    sort(v.begin(),v.end());
    v.pop_back();
    }
}

void disp()
{
   int i=0;
   while(i<v.size())
   {
       cout<<v[i]<<" ";
       i++;
   }
   cout<<endl;
}
int main() {

	int lop=0;
while(lop!=4)
{
    cout<<"Press 1 for push\n";
    cout<<"Press 2 for pop\n";
    cout<<"Press 3 for disp\n";
    cout<<"Press 4 for exit program\n";
    cin>>lop;
    if(lop==1)enque();
    else if(lop==2)dequee();
    else if(lop==3)disp();
}
return 0;
}
