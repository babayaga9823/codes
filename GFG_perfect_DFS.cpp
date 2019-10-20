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
        int flag=0;
        int i;
        for(i=0;i<g[z].size();i++)
        {
            if(vis[g[z][i]]==0)
            {
                    
            stk.push(g[z][i]);
            cout<<stk.top()<<" ";
            vis[g[z][i]]=1;
             flag++;
             break;
            }
        }
            if(flag==0)stk.pop();
        //cout<<d<<" ";
    }
}