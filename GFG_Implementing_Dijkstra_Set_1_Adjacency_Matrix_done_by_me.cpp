#include<bits/stdc++.h>
using namespace std;
void dijkstra(vector<vector<int>> , int ,int );
int main()
{
    int t;
    int V;
    cin>>t;
    while(t--){
        cin>>V;
        
        vector<vector<int>> g(V);
        
        for(int i = 0;i<V;i++){
            vector<int> temp(V);
            g[i] = temp;
        }
        
        for(int i=0;i<V;i++)
        {
      	    for(int j=0;j<V;j++)
      	    {
      		    cin>>g[i][j];
      	    }
        }
        
        int s;
        cin>>s;
        
        dijkstra(g, s, V);
        cout<<endl;
       }
        return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*  Function to implement Dijkstra
*   graph: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/
bool comp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}

void dijkstra(vector<vector<int>> graph, int s, int V)
{
    pair<int,int>p[V];
    int i,j;
    for(i=0;i<V;i++)
    {
        p[i].first=i;
        p[i].second=INT_MAX;
    }
    p[s].second=0;
   // queue<int> q;
    bool vis[V];
    for(i=0;i<V;i++)vis[i]=false;
    //vis[s]=1;
    //q.push(s);
    vector<pair<int,int>>v;
    v.push_back(p[s]);
   while(!v.empty())
   {
       sort(v.begin(),v.end(),comp);
       int i=v[0].first;
       
       swap(v[0],v[v.size()-1]);
       v.pop_back();
       if(vis[i]==true)continue;
        
        vis[i]=true;
      // cout<<"++"<<V<<endl;
        for(j=0;j<V;j++)
        {
           
            //cout<<"**"<<graph[i][j]<<" "<<p[i].second<<endl;
            if((graph[i][j]+p[i].second)<p[j].second)
            {//cout<<"En"<<endl;
                p[j].second=graph[i][j]+p[i].second;
                 if(vis[j]==false)
            {
               // vis[j]=true;
                v.push_back(p[j]);
            }
            }
        }
   }
    for(i=0;i<V;i++)
    {
       cout<<p[i].second<<" ";
    }
    //cout<<endl;
}