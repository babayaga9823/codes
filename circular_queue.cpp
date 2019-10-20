
#include <iostream>
using namespace std;
int ar[3];
int front=,rear=0;
void enque(int a)
{
    if((rear)%3==front&&rear!=0)cout<<"Condition Overflow \n";
    else{
        rear=rear%3;
        ar[rear]=a;
        rear++;

        //if(rear==3)rear=(rear)%3;
    }
}

void deque()
{
    if((front%3==rear-1)||(rear==0&&front==0))
    {
        cout<<"Condition Underflow \n";
        front=0;
        rear=0;
    }
    else{
        front=front%3;
        front++;
        }
}
void disp()
{
    int s,e;
    s=(front)%3;
    e=rear-1;
    cout<<" s "<<s<<" e "<<e<<endl;
    int u=0;
    while(s!=e&&e!=-1)
    {   u++;
        cout<<ar[s]<<" ";
        s++;
        s=s%3;
        if(s==e)
        {
            cout<<ar[s]<<" ";
            break;
        }
    }
    if(s==e&&u==0)cout<<ar[s];
    cout<<endl;

}
int main()
{
int lop=0;
while(lop!=4)
{
    cout<<"Press 1 for push\n";
    cout<<"Press 2 for pop\n";
    cout<<"Press 3 for disp\n";
    cout<<"Press 4 for exit program\n";
    cin>>lop;
    if(lop==1)
    {int z=0;
        cout<<"Enter element to be pushed : ";
        cin>>z;
        cout<<endl;
        enque(z);
    }
    else if(lop==2)
    {
        deque();
    }

    else if(lop==3)
    {
        disp();
    }

}
	return 0;
}
