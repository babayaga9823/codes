		#include <bits/stdc++.h>
			using namespace std;

			int main() 
			{
				unsigned long int t;
				int tq;
				string r;
				getline(cin,r);
				tq=stoi(r);
				for(unsigned long int  l=0;l<tq;l++)
				{
				string s,h;
				getline(cin,s);
				int n;
				getline(cin,h);
					n=stoi(h);
				int i,j,c=0;
				char ch[1010];
				for(i=0;i<n;i++)
				{
				    
				    if(s[i]==' ')
				    {
				        ch[c]=37;
				        c++;
				        ch[c]=50;
				        c++;
				        ch[c]=48;
				        c++;
				    }
				    else
				    {
				        ch[c]=s[i];
				        c++;
				    }
				}
				ch[c]='\0';
				//s=ch;
				for(i=0;ch[i]!='\0';i++)
				{
				    cout<<ch[i];
				}
				cout<<endl;
				}
				return 0;
			}