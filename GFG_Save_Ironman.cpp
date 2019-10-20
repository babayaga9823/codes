		#include <bits/stdc++.h>
		using namespace std;

		int main() 
		{
			unsigned long int t;
			string rew;
			getline(cin,rew);
			t=stoi(rew);
			for(unsigned long int  l=0;l<t;l++)
			{
	
				string s1;
                getline(cin,s1);
				vector<int>v;
				int i,j;
				for(i=0;i<s1.length();i++)
				{
				    int z=s1[i];
				    if((z>=97&&z<=122)||(z>=65&&z<=90)||(z>=48&&z<=57))
				    v.push_back(z);
				}
				int rn,flag=0,x,y;
				
				rn=v.size();
				//cout<<"rc "<<rn<<endl;
			    for(i=0;i<rn/2;i++)
			    {x=v[i];
			        y=v[rn-1-i];
			        int m=abs(x-y);
			       if(m==32||m==0)
			             {
			                 flag++;
			             }
			    }
			    i=0;
			   // cout<<"++++++"<<endl;
			    while(i<v.size())
			    {
			       // cout<<char(v[i]);
			        i++;
			    }
			   // cout<<endl;
			    //cout<<flag<<endl;
			    if(flag==rn/2)cout<<"YES"<<endl;
			    else cout<<"NO"<<endl;
			    
			}
			return 0;
		}