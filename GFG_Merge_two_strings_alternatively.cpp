#include <bits/stdc++.h>
		using namespace std;

		int main() 
		{
			unsigned long int t;
			cin>>t;
			for(unsigned long int  l=0;l<t;l++)
			{
			    string s1,s2;
			    cin>>s1;
			    cin>>s2;
			    int l1,l2,i,lmt,c1=0,c2=0;
			    l1=s1.length();
			    l2=s2.length();
			    lmt=l1+l2;
			    for(i=0;i<lmt;i++)
			    {
			        if(((i+1)%2!=0||c2>=l2)&&(c1<l1))
			        {
			            cout<<s1[c1];
			            c1++;
			        }
			        else if(((i+1)%2==0||c1>=l1)&&(c2<l2))
			        {
			            cout<<s2[c2];
			            c2++;
			        }
			    }
			    cout<<endl;
			}
			return 0;
		}