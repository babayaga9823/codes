{
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* prev, *next;
};
struct Node* getNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = newNode->next = NULL;
	return newNode;
}
struct Node* newNode(struct Node* head,int data){
	 struct Node *p,*temp= (struct Node*)malloc(sizeof(struct Node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head; 
}
void printList(struct Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
void sortedInsert(struct Node** head_ref, struct Node* newNode);
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
	    struct Node* new_node = NULL;
	    int n, tmp, x;
	    cin>>n;
	    while(n--){
	        cin>>tmp;
	        head=newNode(head, tmp);
	    }
	    cin>>x;
	    sortedInsert(&head, getNode(x));
	    printList(head);
	    cout<<'
';
    }
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
	Node *current=*head_ref,*newly=newNode,*pre;
	if(current==NULL)return ;
	int x=newly->data,fond=0;
		pre=current;
		if(current->data>x)
		{
		    fond++;
		}
	while(current!=NULL&&fond==0)
	{
	    pre=current;
	    current=current->next;
	     if(current!=NULL&&current->data>=x)break;
	}
	if(fond==0)
	{
	    if(pre->next!=NULL)
	    {
	        current=pre->next;
	newly->next=current;
	newly->prev=pre;
	pre->next=newly;
	current->prev=newly;
	    }
	    else
	    {
	        pre->next=newly;
	        newly->prev=pre;
	    }
	}
	else
	{
	    newly->next=current;
	    current->prev=newly;
	    *head_ref=newly;
	    
	}
	
}
	