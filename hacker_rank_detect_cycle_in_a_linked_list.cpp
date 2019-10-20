/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
   Node *current;
    int i=0;
    current=head;
    if(head==NULL)return 0;
    else
    {
        
       Node *ar[1010];
        int count=0;
     while(current->next!=NULL)
    {
         for(i=0;i<count;i++)
         {
             if(ar[i]==current) return 1;
         }
         ar[count]=current;
         count++;
         current=current->next;
    }
    }
    return 0;
}