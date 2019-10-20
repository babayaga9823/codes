#include <bits/stdc++.h>
using namespace std;

bool leap(int year)  
{  
    // If a year is multiple of 400,  
    // then it is a leap year  
    if (year % 400 == 0)  
        return true;  
  
    // Else If a year is muliplt of 100,  
    // then it is not a leap year  
    if (year % 100 == 0)  
        return false;  
  
    // Else If a year is muliplt of 4,  
    // then it is a leap year  
    if (year % 4 == 0)  
        return true;  
    return false;  
}



int sumd(int d,int m,int y)
{
    int monnl[]={31,28,31,30,31,30,31,31,30,31,30,31};//non leap
int monl[]={31,29,31,30,31,30,31,31,30,31,30,31};//leap
    int n,i,j,sum=0; 
    for(i=1990;i<y;i++)
{
    if(leap(y))sum+=366;
    else sum+=365;
}
if(leap(y))
   {
       for(i=1;i<m;i++)
        {
            sum+=monl[i-1];
        }
   }
else
   {
       for(i=1;i<m;i++)
        {
            sum+=monnl[i-1];
        }
   }
sum+=d;
return sum;
}


int main() {
int t;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0,d,y,sum=0; 

string s[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
cin>>d>>m>>y;
int a=sumd(30,8,2010);
int b=sumd(d,m,y);
//cout<<"+++"<<a<<" "<<b<<endl;
int day;
if(b<a)
{
   day=(b-a);
   day=day%7;
    day=day+7; 
    day=day%7;
}
else 
{
    day=(b-a);
    day=day%7;
}
//cout<<"***"<<day<<endl;
cout<<s[day]<<endl;
}
return 0;	
}