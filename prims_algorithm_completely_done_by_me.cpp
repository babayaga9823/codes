#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
int tpath=0;

int nextminedgefind(int mat[8][8],vector<int> &a,vector<int> &b)
{
    sort(a.begin(),a.end());//a is the vertex having 
    int i,hold,j,min=I,pi=0,pj=0,flag=0;
    //cout<<"Loop to print elements of a vector"<<endl;
   // i=0;
  //  while(i<a.size())
    {
       // cout<<a[i]<<" ";
       // i++;
    }
    //cout<<endl;
    for(i=0;i<a.size();i++)//we have to find min edge from given set of vertices
    {    hold=a[i];
         for(j=0;j<=7;j++)
         {  int flag=0;
             for(int k=0;k<a.size();k++)
             {
                 if(a[k]==j)flag++;
             }
             if(flag!=0)continue;
             int z;
             z=mat[hold][j];
             if(z<min)
             {
                 min=z; 
                 pi=hold;
                 pj=j;
               
             }
         }
    }
     cout<<"("<<pi<<" , "<<pj<<")"<<endl;
                tpath+=min;
    a.push_back(pj);
    for(i=0;i<a.size();i++)// to delete the inserted vertex from b
    {int g=b.size();
        for(j=0;j<g;j++)
        {
            if(b[j]==a[i])
            {
                swap(b[j],b.back());
                b.pop_back();
            }
        }
    }
       //cout<<"Loop to print elements of b vector"<<endl;
    i=0;
   // while(i<b.size())
    {
       /// cout<<b[i]<<" ";
        //i++;
    }
    //cout<<endl;
    return a.size();
}



void prims(int mat[8][8])
{   vector<int>a;//to hold the set of all visited vertices
    vector<int>b;//to hold the set of all visited edges
    int edg=0,vet=0,i,j,min=I,pi=0,pj=0;
for(i=0;i<=7;i++)//to find the min edge
{if(i>=1)b.push_back(i);
    for(j=0;j<=7;j++)
    {   int z;
        z=mat[i][j];
        if(z<min)
        {   min=z;
            pi=i;
            pj=j;
            //cout<<"MIn"<<min<<endl;
           cout<<"("<<pi<<" , "<<pj<<")"<<endl;
            tpath+=min;
        }
    }
}
  
//cout<<"Initial push"<<pi<<" "<<pj<<endl;
    a.push_back(pi);//started pushing
    a.push_back(pj);
    for(i=0;i<a.size();i++)
    {int g=b.size();
        for(j=0;j<g;j++)
        {
            if(b[j]==a[i])
            {
                swap(b[j],b[b.size()-1]);
                b.pop_back();
                break;
            }
        }
    }
int t=0;

  for(i=1;t!=7;i++)//check here the loop condition
  {
     t=nextminedgefind(mat,a,b);
  }
}

int main() 
{
int edge=0,vertices=0,i,j,**ptr;
int mat[][8]={{I,I,I,I,I,I,I,I},{I,I,2,I,5,I,I,I},{I,2,I,3,7,5,I,I},{I,I,3,I,I,6,8,I},{I,5,7,I,I,4,I,5},{I,I,5,6,4,I,9,8},{I,I,I,8,I,9,I,4},{I,I,I,I,5,8,4,I}};
prims(mat);
cout<<"Total path : "<<tpath<<endl;
  return 0;
}