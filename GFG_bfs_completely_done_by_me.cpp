#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
void bfs(int s,vector<int>adj[],bool vis[]);
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
void bfs(int s,vector<int>adj[],bool vis[])
{
	queue<int>q;
	q.push(s);
	cout<<s<<" ";
	vis[s]=1;
	while(!q.empty())
	{
		int z,i,j;
		z=q.front();
		for(i=0;i<adj[z].size();i++)
		{
			if(vis[adj[z][i]]==0)
			{
				vis[adj[z][i]]=1;
				cout<<adj[z][i]<<" ";
				q.push(adj[z][i]);
			}
		}
		q.pop();
	}
}