#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
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

bool isCyclic(int V,vector<int> adj[])
{
  int a[V],i,j,n;
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
         // cout<<" x "<<x<<" y "<<y<<" i "<<i<<" j "<<j<<endl;
          if(parent(a,x,y))return 1;
          else Union(a,V,x,y);
      }
  }
  return 0; 
}