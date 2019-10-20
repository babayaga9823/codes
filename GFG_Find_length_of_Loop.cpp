int countNodesinLoop(struct Node *head)
{
     Node *current=head;
     vector<Node *>v;
     if(head==NULL)return 0;
     v.push_back(current);
     current=current->next;
     int fond=0,bro=0;
     while(current!=NULL)
     {fond=0;
         for(int i=0;i<v.size();i++)
         {
             if(current==v[i])fond++;
         }
         if(fond==0)
         {
             v.push_back(current);
             current=current->next;
         }
         else 
         {bro++;
             break;
         }
     }
    
     if(bro!=0)
     {
          Node *lopstrt=current;
          int cnt=1;
          current=current->next;
          while(current!=lopstrt)
          {
              current=current->next;
              cnt++;
          }
          return cnt;
     }
     if(bro==0)return 0;
     
}