#include <iostream>

using namespace std;
class node
{
public:
    int body;
    node *link;
    node()
    {
        cout<<"Enter value : ";
        cin>>body;
        cout<<endl;
        link=NULL;
    }
};
int main()
{
    int n,i,j;
   node *head=NULL,*current,*newnod;
   cout<<"Enter no. of nodes : ";
   cin>>n;
    for(i=0;i<n;i++)
    {

         if(head==NULL)
   {
    newnod=new node;
    head=newnod;
   }

   else
    {
        newnod=new node;
        current=head;
    while((*current).link!=NULL)
    {
        current=(*current).link;
    }
    (*current).link=newnod;

   }
    }
     cout<<"To print the elements in the linked list : ";
           current=head;
    while(current!=NULL)
    {   cout<<(*current).body<<" ";
        current=(*current).link;
    }
     cout<<endl;
    return 0;
}
