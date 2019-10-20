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
    for(i=0;!visit.empty();i++)
    {
        int z=visit.top();
       // cout<<"Stack top : "<<z<<endl;
        int entr=0,stkflg=0;
        for(j=1;j<=7;j++)
        {
            int r=mat[z][j];
            if(r!=I)
            {//cout<<"!!!"<<j<<endl;
                entr++;
                int flag=0;
                for(l=0;l<str.size();l++)
                {
                    if(j==str[l])
                    {
                        //cout<<"***"<<z<<"***"<<j<<endl;
                        flag++;
                        stkflg++;
                    }
                }
                if(flag==0)
                {   
                   // cout<<" element pushed "<<j<<endl;
                    visit.push(j);
                    str.push_back(j);
                }
                else 
                {
                    continue;
                }
               
            }
            else continue;
        }
        if(stkflg==entr)visit.pop();
        
    }
i=0;
    while(i<str.size())
    {
        cout<<str[i]<<" ";
        i++;
    }
    
    
}


int main() 
{
 int mat[8][8]={{I,I,I,I,I,I,I,I},{I,I,1,1,1,I,I,I},{I,1,I,1,I,I,I,I},{I,1,1,I,1,I,I,I},{I,1,I,1,I,1,I,I},{I,I,I,1,1,I,1,1},{I,I,I,I,I,1,I,I},{I,I,I,I,I,1,I,I}};
 DFS(mat);
	return 0;
}