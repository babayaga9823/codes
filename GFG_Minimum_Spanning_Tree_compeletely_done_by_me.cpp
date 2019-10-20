#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V,int E,vector<vector<int> > graph);
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int V,E;
        cin>>V>>E;
        vector< vector<int> > graph(V,vector<int>(V,INT_MAX));
        while(E--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            u--,v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }
        cout<<spanningTree(V,E,graph)<<endl;
    }
    return 0;
}


struct body
{
  int start,end,weight;  
};

bool comp(body b1,body b2)
{
    return b1.weight<b2.weight;
}
void intialisation(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
}
bool parent(int a[],int x,int y)
{
    if(a[x]==a[y])return true;
    else return false;
}
void Union(int a[],int n,int x,int y)
{
    int temp=a[x];
    for(int i=0;i<n;i++)
    {
        if(a[i]==temp)a[i]=a[y];
    }
}
int spanningTree(int V,int E,vector<vector<int> > graph)
{
int i,j,cnt=0;
//cout<<" V "<<V<<" E "<<E<<endl;

for(i=0;i<V;i++)
{
    for(j=0;j<V;j++)
    {//cout<<"Val"<<graph[i][j]<<endl;
        if(graph[i][j]!=INT_MAX)
        {
            cnt++;
        }
    }
    //cout<<endl;
}
body b[cnt];
int c=0;
for(i=0;i<V;i++)
{
    for(j=0;j<V;j++)
    {
        if(graph[i][j]!=INT_MAX)
        {
            b[c].start=i;
            b[c].end=j;
            b[c].weight=graph[i][j];
            c++;
        }
    }
}
//cout<<"***"<<cnt<<endl;
sort(b,b+cnt,comp);
int a[V];
intialisation(a,V);
int path=0;
    for(i=0;i<cnt;i++)
    {
        int x=b[i].start,y=b[i].end;
        
        if(!parent(a,x,y))
        {//cout<<" x "<<x+1<<" y "<<y+1<<" p "<<b[i].weight<<endl;
            Union(a,V,x,y);
            path+=b[i].weight;
        }
        
    }
    return path;
}

