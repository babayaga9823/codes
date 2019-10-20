
#include<bits/stdc++.h>
using namespace std;
void bfs(int s, vector<int> adj[], bool vis[])
{
int i,j,l;
vector<int>v;
while(!vis[i])
{cout<<"::"<<i<<" en "<<endl;
    if(!vis[i])
    {
    for(j=0;j<adj[i].size();j++)
    {int fond=0;
       for(l=0;l<v.size();l++)
       {
           if(adj[i][j]==v[l])fond++;
       }
       if(fond==0)v.push_back(adj[i][j]);
    }
    
    }
    vis[i]=1;
    i++;
}
cout<<"*****"<<v.size()<<endl;
 for(i=0;i<v.size();i++)
 {
     cout<<v[i]<<" ";
 }

}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis);
        cout<<endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/

