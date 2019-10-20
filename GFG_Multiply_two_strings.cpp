#include<bits/stdc++.h>
using namespace std;
 
string multiplyStrings(string , string );
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	
    	cout<<multiplyStrings(a,b)<<endl;
    }
     

}
/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete below function */
string multiplyStrings(string s1, string s2) 
{
   long long int l1,l2,i,j,z,car=0,cnt=0,lop=0,strcnter=0,mult=0;
   string smal,larg;
   l1=s1.length();
   l2=s2.length();
   mult=l1*l2;
   smal=l1<l2?s1:s2;
  if(smal==s1)larg=s2;
  else larg=s1;
   string r[10000];
   for(j=smal.length()-1;j>=0;j--)
   {long long int a,b,charcnt=0,reman=0;
   char *ch= new char[1000000];
   string rev;
    car=0;
        a=smal[j]-48;
       for(i=larg.length()-1;i>=0;i--)
        {b=larg[i]-48;
            z=a*b+car;
            if(z>9)//carry part starts
            {   
                reman=z%10;
                car=z/10;
                ch[charcnt++]=reman+48;
            }
            else
            {
                ch[charcnt++]=z+48;
                car=0;
            }
        }
        if(i<0&&car!=0)
        {
            ch[charcnt++]=car+48;
        }
        ch[charcnt]='\0';
        rev=ch;//assignment of starting point of pointer to string
        reverse(rev.begin(),rev.end());
        //cout<<"*****"<<rev<<endl;
        char *zer=new char[1000000];
        long long int zercnt=0,mar=0;
        mar=mult-rev.length()-strcnter;
        lop=0;
        while(zercnt<mult)
        {
         if(zercnt<mar)zer[zercnt++]=48;
         else if(zercnt>=mar&&zercnt<mar+rev.length())
         {
             zer[zercnt++]=rev[lop++];
         }
         else zer[zercnt++]=48;
        }
        zer[zercnt]='\0';
        r[strcnter++]=zer;
   }
   char *finans=new char[1000000];
   long long int finsanscnt=0;
   for(i=mult-1;i>=0;i--)
   {
       int colsum=0,colsumcnt=0,finalsum=0,cary=0,auxsum=0,insrt=0;
       for(j=0;j<strcnter;j++)
       {
           colsum+=(r[j][i]-48);
       }
       auxsum=colsum+cary;
       if(auxsum>9)
       {
           insrt=auxsum%10;
           cary=auxsum/10;
           finans[finsanscnt++]=insrt+48;
       }
       else
       {
           finans[finsanscnt++]=auxsum+48;
       }
       
   }
   if(i<0&&car!=0)
   {
       finans[finsanscnt++]=car;
   }
   finans[finsanscnt]='\0';
   string finalanswr;
   finalanswr=finans;
   reverse(finalanswr.begin(),finalanswr.end());
   char *remvzero =new char[1000000];
   long long int remvzerocnt=0;
    for(i=0;i<finalanswr.length();i++)
    {
        if(finalanswr[i]!=48)
        {
            remvzero[remvzerocnt++]=finalanswr[i];
        }
    }
    remvzero[remvzerocnt]='\0';
    finalanswr=remvzero;//reassigning after removing zeros
   //i=0;
   //while(i<strcnter)cout<<r[i++]<<endl;
   return finalanswr;
}