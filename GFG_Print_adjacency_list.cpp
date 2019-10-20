#include <bits/stdc++.h>
	using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
struct node
{
    int data;
    node *next=NULL;
};
	int main() 
	{
		unsigned long int t=1;
		cin>>t;
		for(unsigned long int  l=0;l<t;l++)
		{
		    int v,e,i,j;
		    cin>>v>>e;
		    node *p[v];
		   i=0;
		   while(i<v)
		   {
		        p[i]=NULL;
		        i++;
		   }
		    for(i=0;i<e;i++)
		    {   int x,y;
		        cin>>x>>y;
		       if(p[x]==NULL)
		            {
		                node *newly=new node;
		                newly->data=y;
		                p[x]=newly;
		            }
		            else
		            {node *current=p[x];
		             node *newly=new node;
		                newly->data=y;
		                while(current->next!=NULL)current=current->next;
		                current->next=newly;
		            }
		            if(p[y]==NULL)
		            {
		                node *newly=new node;
		                newly->data=x;
		                p[y]=newly;
		            }
		            else
		            {node *current=p[y];
		             node *newly=new node;
		                newly->data=x;
		                while(current->next!=NULL)current=current->next;
		                current->next=newly;
		            }
		    }
	
		    for(i=0;i<v;i++)
		    {
		        node *current=p[i];
		        cout<<i;
		        while(current!=NULL)
		        {
		            cout<<"-> "<<current->data;
		            current=current->next;
		        }
		        cout<<endl;
		    }
		}
	
		return 0;
	}