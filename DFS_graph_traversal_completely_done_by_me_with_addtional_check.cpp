#include <bits/stdc++.h>


using namespace std;
#define I INT_MAX 
void DFS(int mat[8][8])
{
    int i,j,l;
    stack<int> visit;
    vector<int> comp,str;
    visit.push(1);
    str.push_back(1);
    for(i=0;visit.size()!=7;i++)
    {
        int z=visit.top();
        for(j=0;j<=7;j++)
        {
            int r=mat[z][j];
            if(r!=I)
            {
                int flag=0;
                for(l=0;l<str.size();l++)
                {
                    if(j==str[l])flag++;
                }
                if(flag==0)
                {
                    visit.push(j);
                    str.push_back(j);
                }
                else continue;
            }
            else continue;
        }
    }
    vector<int>final;
    for(;!visit.empty();)
    {
        int f=visit.top();
        visit.pop();
        final.push_back(f);
        int flag=0,entr=0;
        for(j=0;j<=7;j++)
        {int z=mat[f][j];
         
            if(z!=I)
            {
               entr++;
                for(l=0;l<str.size();l++)
                {
                    if(j==str[l])flag++;
                }
                if(entr==flag){}
                    else
                    {
                        cout<<" Element missing "<<endl;
                    }
                
            }
        }
    }
    i=0;
    reverse(final.begin(),final.end());
    while(i<final.size())
    {
        cout<<final[i]<<" ";
        i++;
    }
    
    
}


int main() 
{
 int mat[][8]={{I,I,I,I,I,I,I,I},{I,I,2,I,5,I,I,I},{I,2,I,3,7,5,I,I},{I,I,3,I,I,6,8,I},{I,5,7,I,I,4,I,5},{I,I,5,6,4,I,9,8},{I,I,I,8,I,9,I,4},{I,I,I,I,5,8,4,I}};
 DFS(mat);
	return 0;
}