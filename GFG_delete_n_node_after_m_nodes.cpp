void linkdelete(struct node  *head, int m, int n)
{
node *cur;
if(head==NULL)return ;
int i=1;
cur=head;
while(cur!=NULL)
{
   
   if(i<m)//aethi notice kar ki i=1 ru start hauchi buli i<m re termnated heba aethi kan hauchi ki for each incremene
   //the node represented is already one more 
    //mane ki node jadi A ru start tahale even in 0-1 increment re bhi node B ku point karuthiba
    {
        cur=cur->next;
        i++;
    }
     else
    {node *curdel=cur;
        int cnt=0;//aethi notice kar ki cnt=0 ru start hauchi N going till cnt<n
        //else ra first statement notice kar...ya mane ki for every increment node pointed is same
        //mane ki 0-1 increment re jadi starting node A tahale 0-1 re A hee point hauthiba..
        while(curdel->next!=NULL&&cnt<n)
        {
            curdel=curdel->next;
            cnt++;
        }
        cur->next=curdel->next;
        i=0;
        
    }
}
}
