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
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0,g,vis);
        
        cout<<endl;
    }

}
/*This is a function problem.You only need to complete the function given below*/
/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
void dfs(int s,vector<int>adj[],bool vis[])
{
	stack<int>stk;
	stk.push(s);
	cout<<s<<" ";
	vis[s]=1;
	while(!stk.empty())
	{
		int z=stk.top(),i,flag=0;
		for(i=0;i<adj[z].size();i++)
		{
			if(vis[adj[z][i]]==0)
			{
				stk.push(adj[z][i]);
				cout<<adj[z][i]<<" ";
				vis[adj[z][i]]=1;
				flag++;
				break;
			}
			
		}
		if(flag==0)stk.pop();
	}
	
}