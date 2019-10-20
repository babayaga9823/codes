#include <bits/stdc++.h>
#define I INT_MAX
using namespace std;
void BFS(int mat[8][8])
{
   queue<int>str;
	vector<int>visited;
	int i,j;
	str.push(1);
	visited.push_back(1);
	for(i=0;visited.size()!=7;i++)
	{
	        int z;
	        z=str.front();
	        str.pop();
	        //cout<<"++"<<z<<endl;
	    for(j=0;j<=7;j++)
	    {
	      int v;
	      //sort(visited.begin(),visited.end());
	      v=mat[z][j];
	      if(v!=I)
	      {int flag=0;
	          for(int l=0;l<visited.size();l++)
	          {
	              if(j==visited[l])flag++;
	          }
	          if(flag==0)
	          {
	              visited.push_back(j);
	              str.push(j);
	          }
	          else continue;
	      }
	      else continue;
	    }
	}
	for(i=0;i<visited.size();i++)
	{
	    cout<<visited[i]<<" ";
	}
	cout<<endl;
}
int main() 
{
    int mat[][8]={{I,I,I,I,I,I,I,I},{I,I,2,I,5,I,I,I},{I,2,I,3,7,5,I,I},{I,I,3,I,I,6,8,I},{I,5,7,I,I,4,I,5},{I,I,5,6,4,I,9,8},{I,I,I,8,I,9,I,4},{I,I,I,I,5,8,4,I}};
    BFS(mat);
	return 0;
}