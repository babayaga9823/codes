#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);
        cout<<endl;
    }
}

/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
   queue<int>q;
   if(N==0)return ;
   q.push(0);
   while(!q.empty())
   {
       int i,z=q.front();
       if(vis[z]==false)
       {
           cout<<z<<" ";
           vis[z]=true;
       }
       q.pop();
       for(i=0;i<adj[z].size();i++)
       {
          if(vis[adj[z][i]]==false)
          {
              q.push(adj[z][i]);
              vis[adj[z][i]]==true;
          }
       }
   }
}

