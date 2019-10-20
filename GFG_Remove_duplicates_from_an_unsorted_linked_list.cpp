{
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *head)
{if(head==NULL)return NULL;
 Node *prev=NULL,*current=NULL,*after=NULL;
vector<int>v,s;
current=head;
while(current!=NULL)
{
    v.push_back(current->data);
    current=current->next;
}
//sort(v.begin(),v.end());
int i;
int a,b,x,y;
for(a=0;a<v.size();a++)
{x=v[a];
int flag=0;
    for(b=0;b<v.size();b++)
    {y=v[b];
        if(x==y)
        {
            if(flag==0)flag++;
            else v[b]=INT_MAX;
        }
    }
}
i=0;
//v=s;
while(i<v.size())
{
   //cout<<"+++"<<v[i]<<endl;
    i++;
}
int fc=0;
current=head;
//Node *prev=NULL;
//int fc=0;
//current=head;
while(fc<v.size())
{
    if(v[fc]!=INT_MAX)
    { prev=current;  
    current->data=v[fc];
    fc++;
    current=current->next;
    }
    else fc++;
    
}
prev->next=NULL;
return head;
}