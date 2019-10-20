#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << isCyclic(adj, V)<<endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/

   void initialize( int Arr[ ], int N)
    {
        for(int i = 0;i<N;i++)
        Arr[ i ] = i ;
    }
    //returns true if A and B are connected, else returns false 
     bool parent( int Arr[ ], int A, int B)                           
    {//cout<<"*** A "<<Arr[ A ]<<" B "<<Arr[ B ]<<" 0A "<<A<<" 0B "<<B<<endl;
    if(Arr[ A ] == Arr[ B ])
    return true;
    else
    return false;   
    }
    //change all entries from arr[ A ] to arr[ B ].
    void Union(int Arr[ ], int N, int A, int B)
    {//cout<<"called"<<endl;
        int TEMP = Arr[ A ];
       // cout<<" N "<<N<<endl;
    for(int i = 0; i < N;i++)
        {
        if(Arr[ i ] == TEMP)
        Arr[ i ] = Arr[ B ]; 
        }
    }

bool isCyclic(vector<int> adj[],int V)
{
  int a[V],i,j,n,b[V][V]={0};
 if(V==0)return 0;
  if(V==1)return 1;
  initialize(a,V);
  for(i=0;i<V;i++)
  {
      for(j=0;j<adj[i].size();j++)
      {
          int x,y,px,py;
          x=i;
          y=adj[i][j];
          if(b[x][y]==0)
          {b[x][y]=1;
        	b[y][x]=1;
        	 if(parent(a,x,y))return 1;
        	else Union(a,V,x,y);	
          }
         // cout<<" x "<<x<<" y "<<y<<" i "<<i<<" j "<<j<<endl;
         
      }
  }
  return 0; 
}