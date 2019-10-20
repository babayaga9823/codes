#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
using namespace std;


int m,*p,sn,arg,arg2;//sn is variable for show number in manager function N m is for number of shows in a day
string name[10];
int ar[100][12][18];


void show()//this function is for entering the number of movie running in hall
{
    int i,j;
    p=(int*)(malloc(sizeof(int)));
    cout<<"\n\n\t\t\t\t\t\t\tENTER THE NUMBER SHOWS IN A DAY\n";
    cin>>m;
    (*p)=m;
for(i=0;i<m;i++)
{   fflush(stdin);
    cout<<"\n\n\t\t\t\t\t\t\tENTER THE NAME OF MOVIE "<<i+1<<endl;
    getline(cin,name[i]);

}
system("cls");
cout<<"\n\n\t\t\t\t\t\t\tTHE MOVIES RUNNING IN HALL ARE:\n";
for(i=0;i<m;i++)
{
    cout<<"MOVIE :\t"<<i+1<<"\t";
    cout<<name[i]<<endl;

}
}








void seatdisp(int z)//argument to display the seats of that particular movie
{
    arg=z;
    int i,j;
    char ch='A',st;
   cout<<"\n\n\t\t\t\t\t\t\tBOOKED SEATS ARE MARKED WITH [x]\n\n";
    for(i=0;i<13;i++)
    {
        ch='A';
        ch=ch+i;
        cout<<"\t";

        for(j=0;j<18;j++)
        {
            if(ar[arg][i][j]==1)
            cout<<"["<<" X"<<"]";
            else
            {
                cout<<"["<<ch<<j+1<<"]";
            }

            cout<<" ";//1 white spaces given
                      //the seat would be displayed in format[A1]

            if(j==4||j==12)
                cout<<"\t";

        }
        cout<<"\n\n";
 if(i==12)
    {
        cout<<"\n\n\t\t\t\t\t\t SCREEN THIS WAY\n";
        cout<<"\t______________________________________________________________________________________________________________";
    }

    }

}




void book(int z,int a)//first argument is for the movie number and 2nd argument for manager mode
{int i,j,num,al,n,col,stor,arg;
arg=z;
    arg2=a;
    if(arg2==100)
    {
      cout<<"\n\n\t\t\t\t\t\t\tnADMIN ENTER THE SEATS WHICH WONT BE AVAILABLE FOR BOOKING\n";
    }

else
{
 cout<<"\n\n\t\t\t\t\t\t\tCUSTOMER BOOKING\n";

}

        seatdisp(arg);
    char ch='A',chr;
    cout<<"\n\n\t\t\t\t\t\t\tENTER THE SEAT NUMBER\t";
        cin>>chr>>col;
        stor=chr-65;
        col=col-1;
        if(ar[arg][stor][col]==0)
        ar[arg][stor][col]=1;

        else
        {

            while(ar[arg][stor][col]!=0)
            {
                if(arg2==100)
               cout<<"\n\n\t\t\t\t\t\t\tADMIN YOU HAVE ALREADY MARKED THIS SEAT AS BOOKED ENTER A NEW SEAT WHICH IS BOOKED\n";
           else
           {
            cout<<"\n\n\t\t\t\t\t\t\tTHE SEAT YOU SELECTED IS ALREADY OCCUPIED ENTER A NEW SEAT\n";
           }
                cin>>chr>>col;
                stor=chr-65;
                col=col-1;
            }
            ar[arg][stor][col]=1;
        }

}

void seatin(int z)//argument for the particular movie seat booking
{  
    
     int j,n;
    arg=z;
    //cout<<"THE ARGUMENT IS nest="<<arg<<endl;
     cout<<"\n\n\t\t\t\t\t\t\tENTER THE NUMBER OF SEATS TO BE BOOKED"<<"movie no="<<arg<<endl;
    cin>>n;
       for(j=0;j<n;j++)//loop for booking the desired no. of tickets as input by user
{
     book(arg,20);
     cout<<"LOOP IS RUNNING\n";
       system("cls");
  seatdisp(arg);

}


}




void manager()
{   char mov='c',in='c';
    show();
    while((mov=='c')||(mov=='C'))//this loop is for entering the seats that are booked for different movies
    {
        cout<<"\n\n\t\t\t\t\t\t\tENTER THE SHOW NUMBER WHOSE SEATS U WANT TO ASSIGN FOR BOOKING\n";
    cin>>sn;

    while((in=='c')||(in=='C'))
    {
      book(sn,100);
      system("cls");
      seatdisp(sn);
    cout<<"\n\n\t\t\t\t\t\t\tPRESS 'C' or 'c' IF U WANT TO CONTINUE ENTERING THE BOOKED SEATS\n";
    cin>>in;
    }

    cout<<"\n\n\t\t\t\t\t\t\tPRESS 'C' or 'c' IF U WANT TO CONTINUE ENTERING FOR OTHER MOVIES\n";
    cin>>mov;
    in='c';
    }

}





int main()
{
    while(1)
    {
       int ar[m][12][18],i;
    char in='c',ind,cus;//cus is customer and ind is manager input
    cout<<"\n\n\t\t\t\t\t\t\tTO ENTER MANAGER LOGIN PRESS 'o' or 'O'\n";
    cin>>ind;
    if((ind=='o')||(ind=='O'))
    {
        manager();//the manager mode to set the number of seats available for booking
    }
    system("cls");
    cout<<"\n\n\t\t\t\t\t\t\tDEAR CUSTOMER TO BOOK SEATS PRESS 'y' or 'Y' \n";
    cin>>cus;
     if((cus=='y')||(cus=='Y'))//the customer part starts here
     {
         cout<<"\n\n\t\t\t\t\t\tTHE SEATS AVAILABLE ARE:\n";
    while((in=='c')||(in=='C'))
    {
        cout<<"\n\n\t\t\t\t\t\t\tTHE MOVIES RUNNING IN HALL ARE:\n";//to display the shows running in theater

            for(i=0;i<m;i++)//this loop shows the list of movies running
            {
                 cout<<"MOVIE:\t"<<i+1;
                 cout<<"\t"<<name[i]<<endl;

            }


            cout<<"\n\n\t\t\t\t\t\t\ttENTER THE MOVIE NUMBER TO BOOK TICKET\n";
            cin>>arg;
               // cout<<"THE ARGUMENT IS ="<<arg<<endl;
            seatdisp(arg);
            seatin(arg);
            system("cls");
            seatdisp(arg);
    cout<<"\n\n\t\t\t\t\t\t\tPRESS 'C' or 'c' IF U WANT TO BOOK SEAT AGAIN?\n";
    cin>>in;
    }


     }


    }


    return 0;
}

