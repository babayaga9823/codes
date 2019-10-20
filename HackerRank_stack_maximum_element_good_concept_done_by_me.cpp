
#include <bits/stdc++.h>
using namespace std;


int main() {
    
    long long int i,j,n=0,t=0,m=0,cnt=0,hold=0;
    vector<long long int>v;
    stack<long long int>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>m;
            if(s.empty())s.push(m);
            else
            {
                int z=s.top()>m?s.top():m;
                s.push(z);
            }
            
            
       }
       else if(t==2)
       {
         
         s.pop();     
       }
       else if(t==3)
       {
           cout<<s.top()<<endl;
       }
       
    }
    
    
    return 0;
}
