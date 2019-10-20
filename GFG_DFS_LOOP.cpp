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
void dfs(int s, vector<int> g[], bool vis[])
{
    stack<int>stk;
    stk.push(s);
    while(!stk.empty())
    {
        int i,z;
        z=stk.top();
        int fond=0;
        if(vis[z]==false)
        {
            cout<<z<<" ";
            vis[z]=true;
        }
        for(i=0;i<g[z].size();i++)
        {
            if(vis[g[z][i]]==false)
            {
                fond++;
                stk.push(g[z][i]);
                break;
            }
        }
        if(fond==0)stk.pop();
    }
}