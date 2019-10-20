	#include <bits/stdc++.h>
		using namespace std;

		int main() 
		{
			unsigned long int t;
			cin>>t;
			for(unsigned long int  l=0;l<t;l++)
			{
			    string s;
			    cin>>s;
			    int cur=0,max=-99;
			    char a[1000];
			    for(int i=0;i<s.length();i++)
			    {
			       // int z=s[i];
			        int j=i,l=0,fond=0;
			        while((j+l)<s.length()&&s[j+l]>=48&&s[j+l]<=57)
			        {
			            a[l]=s[j+l];
			            l++;
			            fond++;
			        }
			        if(fond!=0)
			        {
			            a[l]='\0';
			        //string b=a;
			        //cout<<"***"<<b<<endl;
			        cur=stoi(a);
			        if(cur>max)max=cur;
			        }
			    }
			    cout<<max<<endl;
			}
			return 0;
		}