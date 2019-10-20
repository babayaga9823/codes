#include <iostream>
using namespace std;

struct node{
	int data;
	struct node * link;
}*head=NULL;

int main() {
	struct node *current,*next;
	int n,i,body;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if(head==NULL)
	{
		current=new struct node;
		current->link=NULL;
		cin>>body;
		current->data=body;
		head=current;
	}
	else
	{
		next=new struct node;
		next->link=NULL;
		cin>>body;
		next->data=body;
		current=head;
		while(current->link!=NULL)
		{
			current=current->link;
		}
		current->link=next;
	}	
	}
	//now to print
	current=head;
		while(current!=NULL)
		{
			cout<<	current->data<<endl;
			current=current->link;
		}
	return 0;
}