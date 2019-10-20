#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int z,cur=0,max=-9,y,pev=0,el=0;
        int n=s.length();
      for(int i=0;i<n;i++)
        {y=s[i];
            if(y==97||y==101||y==105||y==111||y==117)
            {
                cur++;
                if(i==n-1)
                {
                    if(cur>max)max=cur;
                }
            }
            else
            {el++;
                if(cur>max)max=cur;
                cur=0;
            }
        }
        if(el==0)
        {
            if(cur>max)max=cur;
        }
        cout<<max<<endl;
    return 0;
}