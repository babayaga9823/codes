#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX

struct node{
    int vertex;
    int val=I;
};
void dijkstra(int mat[6][6])
{
    node n[6];//i will start from index 1 not 0
    vector<int>v;// to keep the vertices already visited
    stack<int>stk;//to keeep the vertices to be visited
    int i,j;
    for(i=1;i<=5;i++)//to intialize all the vertices
    {
        n[i].vertex=i;
    }
    stk.push(1);//starting node Pushed
    for(j=1;j<=5;j++)//to mark the distance of all elemts near to vertex 1
    {
        if(mat[1][j]!=I)
        {
            if(mat[1][j]<n[j].val)
            {
                n[j].val=mat[1][j];
                //cout<<"fst Index "<<n[j].vertex<<" value "<<n[j].val<<endl;
                stk.push(j);
            }
            else continue;
        }
        else continue;
    }
    n[1].val=0;//VALUE OF STARTING NODE
   v.push_back(1);
  // cout<<" Pushed in v "<<v.front()<<endl;
   
    for(i=0;!stk.empty();i++)
    {
        int z=stk.top();
        // cout<<" Pushed in v and popped from stack : "<<z<<endl;
       int h=0;
       while(h<v.size())
       {
           //cout<<"::::"<<v[h]<<endl;
           h++;
       }
        stk.pop();
        for(j=1;j<=5;j++)
        {
            if(mat[z][j]!=I)
            { if(n[z].val+mat[z][j]<n[j].val)
                    {
                        n[j].val=n[z].val+mat[z][j];
                       // cout<<n[j].vertex<<" value updated to "<<n[j].val<<endl;
                        stk.push(j);
                     }
            }
        }
         v.push_back(z);
    }
    
    
    for(i=1;i<=5;i++)
    {
        cout<<" vertex number "<<n[i].vertex<<" val : "<<n[i].val<<endl;
    }
}
int main() 
{
    int mat[6][6]={{I,I,I,I,I,I},{I,I,10,3,I,I},{I,I,I,1,2,I},{I,I,4,I,8,2},{I,I,I,I,I,7},{I,I,I,I,9,I}};
	dijkstra(mat);
	return 0;
}