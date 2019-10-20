		#include <bits/stdc++.h>
			using namespace std;

			int main() 
			{
				unsigned long int t;
				cin>>t;
				for(unsigned long int  l=0;l<t;l++)
				{
					string s;
					vector<string>v;
					cin>>s;
					int i,c=0;
					for(i=0;i<s.length();i++)
					{
					    int cnt=0;
					    char r[10000];
					    while(s[i]!='.'&&i<s.length())
					    {
					        r[cnt]=s[i];
					        i++;
					        cnt++;
					    }
					    r[cnt]='\0';
					    //cout<<"******"<<r<<endl;
					    v.push_back(r);
					    c++;
					}
				    int len=c;
				    //cout<<"++++++"<<c<<endl;
				    reverse(v.begin(),v.end());
				    for(i=0;i<len;i++)
				    {
				        //cout<<r[i];
				      cout<<v[i];
				        if(i<len-1)
				        cout<<'.';
				    }
				    cout<<endl;
				}
				return 0;
			}