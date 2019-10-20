{
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
Node *deleteK(Node *,int);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    int K;
    cin>>K;
    Node *res = deleteK(head,K);
    Node *temp = res;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
    }
    return 0;
}
/* Function to get the middle of the linked list*/
/*K will always be in range */
}
/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method*/
Node * deleteK(Node *head,int K)
{
  Node *current;
   current=head;
   int cnt=0,ch=0;
   int a[1000];
   while(current!=NULL)
   {    
       a[cnt]=current->data;
       cnt++;
       current=current->next;
   }
  
  int i=0,del=0;
  while(i<cnt)
  { 
      if(K==1)return NULL;
      if(K==0)return head;
      else if((i+1)%K==0)
      {//cout<<"***"<<a[i]<<endl;
          a[i]=-9999999;
          
      }
      else del++;
      i++;
  }
   current=head;
   ch=cnt;
   cnt=0;
   //cout<<"++"<<ch<<endl;
   int cal=0;
   while(cnt<ch)
   {
       if(a[cnt]!=-9999999)
       {
           current->data=a[cnt];
           cnt++;
           cal++;
           if(cal<del)
          current=current->next;
       }
       else cnt++;
   }
   current->next=NULL;
   return head;
   
}