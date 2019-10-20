	#include <bits/stdc++.h>
			using namespace std;
struct body
{
 int start,end;
};
bool comp(body b1,body b2)
{
    return b1.end<b2.end;
}
int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
        int i,j,n;
        cin>>n;
        int s[n],e[n];
        body b[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            b[i].start=s[i];
        }
         for(i=0;i<n;i++)
        {
             cin>>e[i];
            b[i].end=e[i];
        }
        sort(b,b+n,comp);
        int begin,cnt=1;
        begin=b[0].end;
        for(i=1;i<n;i++)
        {
            if(b[i].start>=begin)
            {
                begin=b[i].end;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
};