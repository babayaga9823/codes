#include<iostream>
#include<stdio.h>

using namespace std;

int main ()
{
    int i,j,n,a[100],temp;
    cout<<"WELCOME TO BUBBLE SORT IN INCREASING ORDER\n";
    cout<<"ENTER THE NUMBER OF ENTRIES TO BE MADE\n";
    cin>>n;
    cout<<"ENTER THE ARRAY\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"THE ARRAY BEFORE SORTING IS-";

    for(i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<=n-2)
            cout<<",";
    }
    cout<<"\n";
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-1-i;j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
             }
         }

     }
      cout<<"THE ARRAY AFTER SORTING IS-";

    for(i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<=n-2)
            cout<<",";
    }
}
