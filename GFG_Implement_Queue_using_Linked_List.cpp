void MyQueue:: push(int x)
{
   QueueNode *newly=new QueueNode(x);
   if(rear==NULL||front==NULL)
   { //cout<<"++deleted"<<rear->data<<" *** "<<front->data<<endl;
       front=newly;
       rear=newly;
   }
   else {
       rear->next=newly;
       rear=rear->next;
        //cout<<"++Pushed"<<rear->data<<" *** "<<front->data<<endl;
   }
  
}

int MyQueue :: pop()
{
    if(front==NULL)return -1;
    else
    {
        int z=front->data;
//cout<<"++oppp"<<rear->data<<" *** "<<front->data<<endl;
front=front->next;
return z;
    }

}
