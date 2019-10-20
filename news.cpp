#include <iostream>

using namespace std;

struct node
{
    int element;
    struct node* link;
}start,second,*last,*ter;
struct node* aray_node[3];
int main()
{

    start.element=100;
    last=&second;
    start.link=last;
    second.element=200;
    second.link=NULL;
    ter=&start;
    while(ter!=NULL)
    {

   cout<< (*ter).element<<endl;
   cout<<"Current pointing address"<<ter<<endl;
   cout<<"Next pointing address"<<(*ter).link<<endl;
        ter= (*ter).link;

    }

    aray_node[0]=&start;
    cout<<"Here the program starts\n\n\n";
    cout<<"The value of adddress stored in index 0 of array of adrress of nodes"<<aray_node[0];




    return 0;
}
