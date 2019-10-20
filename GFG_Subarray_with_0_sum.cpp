	#include <bits/stdc++.h>
		using namespace std;

		int main() 
		{
			unsigned long int t;
			cin>>t;
			for(unsigned long int  l=0;l<t;l++)
			{
			    int n,i,j;
			    cin>>n;
			    int a[n],fond=0;
			    for(i=0;i<n;i++)
			    {
			        cin>>a[i];
			        if(a[i]==0)fond++;
			    }
			    int sum=0;
			     for(i=0;i<n&&fond==0;i++)
			      {
			          sum=a[i];
			           if(sum==0)
			            {
			           fond++;
			           break;
			            }
			           j=i+1;
			            
			               while(j<n)
			               {  
			                   sum=sum+a[j];
			                   
			                   if(sum==0)
			                   {
			                        fond++;
			                        break;
			                   }
			                   j++;
			                   
			               }
			      }
			    if(fond==0)cout<<"No"<<endl;
			    else cout<<"Yes"<<endl;
			    
			}
			return 0;
		}