#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
int tpath=0;
class sets
{
public:
  int val;
  int parent;
};

vector<sets> makesett(vector<int> v)
{
  vector<sets> vs;
  for(int i=0;i<v.size();i++)
  {   sets s;
      s.val=v[i];
      s.parent=-1;
      vs.push_back(s);
  }
    return vs;
}
//test conditions 
//7
//99 55 102 67 119 145 23

int findd(vector<sets> &vs,int &a)//to find the root/parent of a set
{//its returning index of the parent
int ind,finder=0,vals,parents,flag=-1,finalindex=0;
  for(int i=0;i<vs.size();i++)
  {  
      if(vs[i].val==a)
      {   flag++;
          ind=i;
          break;
      }
  }
  if(flag==-1)
  {
      cout<<"Element not found in set "<<endl;
      return -99;
  }
  finder=ind;//finder is set the index of vs
  if(vs[finder].parent==-1)
      { //cout<<"The parent is : "<<-1<<endl;
          return -1;
      }
  for(int i=0;i<vs.size();i++)
  {  
      
      if(vs[finder].parent>0)
      {
          finder=vs[finder].parent;
      }
      else{
          break;
      }
  }
vals=vs[finder].val;
parents=vs[finder].parent;
finalindex=finder;
  //cout<<"The parent is : "<<finalindex<<endl;
    return finalindex;
}


vector<sets> unionn(vector<sets> &vs,int a,int b)
{
int cnt=0,min=0,ia=0,ib=0;
for(int i=0;i<vs.size();i++)
 {sets z=vs[i];
     if(z.val==a)
     {
         ia=i;
         cnt++;
     }
     if(z.val==b)
     {
         ib=i;
         cnt++;
     }
 }
 if(cnt==2)
 {
    min=a<b?a:b; 
 }
 if(vs[ia].parent==-1&&vs[ib].parent==-1)// if a whole new set is being formed
 {
     if(min==a)//this condition is used that we choose the least element
     {
        vs[ib].parent=ia;
        vs[ia].parent=-2;
        //cout<<"Sucessfully paired and root is index : "<<ia<<endl;
     }
     else
     {
        vs[ia].parent=ib;
        vs[ib].parent=-2;
        //cout<<"Sucessfully paired and root is index : "<<ib<<endl;
     }
     
 }
 else if((vs[ia].parent!=-1)&&(vs[ib].parent!=-1))//this part is to join 2 sets with one more than one lements
 {
     int pa=findd(vs,a);
     int pb=findd(vs,b);
     if(pa==pb)
     {
         //cout<<"Already belong to same set"<<endl;
     }
     else
     {
         if(vs[pa].val<vs[pb].val)
         {
             vs[pb].parent=pa;
             vs[pa].parent=vs[pa].parent;//that is parent will remain same
            // cout<<"Sucessfully paired and root is index : "<<pa<<endl;
         }
         else if(vs[pa].val>vs[pb].val)
         {
             vs[pa].parent=pb;
             vs[pb].parent=vs[pb].parent;//that is parent will remain same
             //cout<<"Sucessfully paired and root is index : "<<pb<<endl;
         }
     }
 }
 else//adding of a elemnt to existing set one of them is having parent -1
 {
     if(vs[ia].parent==-1)
     {
         vs[ia].parent=ib;
        vs[ib].parent=vs[ib].parent;//that is no change in parent
        //cout<<"Sucessfully paired and root is index : "<<ib<<endl;
     }
      else if(vs[ib].parent==-1)
     {
        vs[ib].parent=ia;
        vs[ib].parent=vs[ib].parent;//that is no change in parent
        //cout<<"Sucessfully paired and root is index : "<<ia<<endl;
     }
 }
 return vs;
}

class node
{
    public:
    int r;
    int c;
    int val;
};
bool comp(node a,node b)
{
    if(a.val==b.val)
    {
        if(a.r<b.r)return 1;
        else return 0;
    }
    else return a.val<b.val;
}
int ruskals(int mat[8][8],vector<node> &nd,vector<sets> &set,vector<int>&cntt)
{
    int pi,pj,pv,ndcnt=0,indx=0;
    
   sort(nd.begin(),nd.end(),comp);
   int posbl=0;
   while(posbl==0&&ndcnt<nd.size())
        {
            pi=nd[ndcnt].r;
            pj=nd[ndcnt].c;
            pv=nd[ndcnt].val;
            int a=findd(set,pi);
            int b=findd(set,pj);
            if(a==b&&a==-1)
            {
                posbl++;
                break;
            }
            else if(a!=b)
             {
                posbl++;
                break;
            }
            else{
                ndcnt++;
            }
        }
        //cout<<"++++"<<ndcnt<<endl;
        unionn(set,pi,pj);
        cout<<" ( "<<pi<<" , "<<pj<<" ) "<<endl;
        cntt.push_back(pv);
        indx=ndcnt;
   tpath+=pv;
   //cout<<"*****"<<cntt.size()<<endl;
   return cntt.size();
}


int main() 
{
int edge=0,vertices=0,i,j,**ptr,nct=0;
vector<int> v;
vector<node> nd;
 vector<sets> set;
  
int mat[][8]={{I,I,I,I,I,I,I,I},{I,I,2,I,5,I,I,I},{I,2,I,3,7,5,I,I},{I,I,3,I,I,6,8,I},{I,5,7,I,I,4,I,5},{I,I,5,6,4,I,9,8},{I,I,I,8,I,9,I,4},{I,I,I,I,5,8,4,I}};
for(i=0;i<8;i++)
{v.push_back(i);
    for(j=0;j<8;j++)
    {int z=mat[i][j];
        if(z!=I)
        {
           node n; 
            n.r=i;
            n.c=j;
            n.val=z;
            nd.push_back(n);
            nct++;
        }
    }
}
set=makesett(v);
 for(j=0;j<nd.size();j++)
    {
       //cout<<" row "<<nd[j].r<<" colmn "<<nd[j].c<<" val "<<nd[j].val<<endl;
    }
    //cout<<nd.size()<<endl;
int ret=0;
vector<int>cntt;
for(int f=0;ret!=6;f++)
{
   ret=ruskals(mat,nd,set,cntt);
   //cout<<"Perfect"<<endl;
}
cout<<"Total path : "<<tpath<<endl;
  return 0;
}