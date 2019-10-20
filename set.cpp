#include <bits/stdc++.h>
using namespace std;
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


int findd(vector<sets> &vs,int a)//to find the root/parent of a set
{//its returning index of the parent
int ind,finder=0,vals,parents,flag=-1,finalindex=0;
  for(int i=0;i<vs.size();i++)
  {  
      if(vs[i].parent==a)
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
      { cout<<"The parent is : "<<-1<<endl;
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
  cout<<"The parent is : "<<finalindex<<endl;
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
    min=a>b?a:b; 
 }
 if(vs[ia].parent==-1&&vs[ib].parent==-1)// if a whole new set is being formed
 {
     if(min==a)//this condition is used that we choose the least element
     {
        vs[ib].parent=ia;
        vs[ia].parent=-2;
        cout<<"Sucessfully paired and root is index : "<<ia<<endl;
     }
     else
     {
        vs[ia].parent=ib;
        vs[ib].parent=-2;
        cout<<"Sucessfully paired and root is index : "<<ib<<endl;
     }
     
 }
 else if((vs[ia].parent!=-1)&&(vs[ib].parent!=-1))//this part is to join 2 sets with one more than one lements
 {
     int pa=findd(vs,a);
     int pb=findd(vs,b);
     if(pa==pb)
     {
         cout<<"Already belong to same set"<<endl;
     }
     else
     {
         if(vs[pa].val<vs[pb].val)
         {
             vs[pb].parent=pa;
             vs[pa].parent=pa;//that is parent will remain same
             cout<<"Sucessfully paired and root is index : "<<pa<<endl;
         }
         else if(vs[pa].val>vs[pb].val)
         {
             vs[pa].parent=pa;
             vs[pb].parent=pb;//that is parent will remain same
             cout<<"Sucessfully paired and root is index : "<<pb<<endl;
         }
     }
 }
 else//adding of a elemnt to existing set one of them is having parent -1
 {
     if(vs[ia].parent==-1)
     {
         vs[ia].parent=ib;
        vs[ib].parent=vs[ib].parent;//that is no change in parent
        cout<<"Sucessfully paired and root is index : "<<ib<<endl;
     }
      else if(vs[ib].parent==-1)
     {
        vs[ib].parent=ia;
        vs[ib].parent=vs[ib].parent;//that is no change in parent
        cout<<"Sucessfully paired and root is index : "<<ia<<endl;
     }
 }
}

int main() 
{
  vector<int>v;
  int n;
  cout<<"Enter the length of set : ";
  cin>>n;
  cout<<endl;
  v.push_back(0);//to start the index from 1
  for(int i=1;i<=n;i++)
  {
     int z;
     cin>>z;
     v.push_back(z);
  }
  vector<sets> set;
  set=makesett(v);
  unionn(set,102,67);
  unionn(set,102,145);
  unionn(set,99,119);
  unionn(set,119,102);
  for(int i=1;i<=n;i++)
  {
      cout<<" Value "<<set[i].val<<" paren index is : "<<set[i].parent<<endl;
      
  }
  return 0;
}