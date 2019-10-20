#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int j=0;j<t;j++)
    {vector<int>v;
    int n,min=9999,max=-9;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            v.push_back(z);
        }
         sort(v.begin(),v.end());
         int pev=v[0],cur=1;
         for(int i=1;i<n;i++)
        {
            if(v[i]==pev)
            {
                cur++;
            }
            else
            {
                pev=v[i];
                if(cur<min)min=cur;
                if(cur>max)max=cur;
                cur=1;
            }
        }
         if(v[n-1]==v[n-2])
         {
              if(cur<min)min=cur;
              if(cur>max)max=cur;
         }
          
          for(int i=0;i<n;i++)
        {
            v.pop_back();
        }
        if(max-min>0)cout<<max-min<<endl;
        else cout<<-1<<endl;
        
    }
   
    return 0;
}