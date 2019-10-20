void dfs(int s, vector<int> g[], bool vis[])
{
    stack<int>stk;
    //if(g[0].size()==0)return ;
    stk.push(s);
    cout<<stk.top()<<" ";
    vis[s]=1;
    while(!stk.empty())
    {
        int x,y,z;
        z=stk.top();
        while(g[z].size()!=0)
        {
            int i=0;
                while(i<g[z].size()&&vis[g[z][i]]!=0)
                {
                    i++;
                }
                if(i<g[z].size()&&vis[g[z][i]]==0)
                {
                    
                stk.push(g[z][i]);
                cout<<stk.top()<<" ";
                vis[g[z][i]]=1;
                  z=g[z][i];
                }
                else break;
        }
        int d=stk.top();
        stk.pop();
        //cout<<d<<" ";
    }
}