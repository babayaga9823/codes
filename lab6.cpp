#include<iostream>

using namespace std;
int p;
class link
{
    public:
    int body;
    link *next;
};
link *current=NULL,*new_node=NULL,*head=NULL,*past_node=NULL,*temp1=NULL,*temp2=NULL,*prev_node=NULL;
int main()
{
    int i=0;
    while(i<5)//loop to create 5 nodes as given in question
    {
            if(head==NULL)
    {   int n;
        head=new(link);
        cout<<"ENTER THE ELEMENT OF "<<i+1<<" NODE\n";
        cin>>n;
        (*head).body=n;
        (*head).next=NULL;
    }
    else
    {
        int n;
        new_node=new(link);
        current=head;
        cout<<"ENTER THE ELEMENT OF "<<i+1<<" NODE\n";
        cin>>n;
        (*new_node).body=n;
        (*new_node).next=NULL;
        while((*current).next!=NULL)
        {
            current=(*current).next;
        }
         (*current).next=new_node;
    }
        i++;
    }
    //to display the input linked list
    current=head;
    i=0;
     cout<<"THE DATAS ARE : ";
     while(current!=NULL)
        {

            cout<<(*current).body;
            if((*current).next!=NULL)
            cout<<" , ";
            current=(*current).next;
            i++;
        }
     p=i;
int j=0;
//here starts the code of sorting





for(i=0;i<p-1;i++)//outer loop to traverse the whole linkedlist
     {  current=head;
        prev_node=current;//example:its now pointing to node 1
        current=(*current).next;//example:its now pointing to node 2

         for(j=0;j<p-1-i;j++)/*inner loop to that decreases the length to be tarversed
         as the outer runs the linkedlist gets sorted from last*/
         {

          //for head
          if(prev_node==head)
          {
            if((*prev_node).body>(*current).body)
             {
                 temp1=prev_node;
                 temp2=current;
                (*prev_node).next=(*current).next;//this part is correct
                (*current).next=temp1;
                head=temp2;
             }
          //not for head
             else
             {
                 past_node=prev_node;
                 prev_node=(*current).next;
                 current=(*current).next;

             }
          }
           else
           {

          if((*prev_node).body>(*current).body)
             {
               //here the swapping is taking place
                 temp1=prev_node;
                 temp2=current;
                (*prev_node).next=(*current).next;//this part is correct
                (*current).next=temp1;
                (*past_node).next=temp2;

             }
          //not for head
             else
             {  //here just the places r being shift
               past_node=prev_node;
               prev_node=current;
               current=(*current).next;

             }

         }

     }
      cout<<"THE LINKED LIST AFTER SORTING IN INCREASING ORDER IS : ";
   //code to print the sorted linked list
    current=head;
i=0;
   while(current!=NULL)
        {

            cout<<(*current).body;

            if(i<=p-2)
            cout<<",";


            current=(*current).next;
            i++;
        }


}

}
