	#include <bits/stdc++.h>
			using namespace std;
struct body
{
 float val,weight,avg;
};
bool comp(body b1,body b2)
{
    return b1.avg>b2.avg;
}
int main() 
{
	unsigned long int t;
	cin>>t;
	for(unsigned long int  l=0;l<t;l++)
    {
        float n,w,a,d;
        int j,i;
        cin>>n>>w;
        body b[(int)n];
        for(i=0;i<n;i++)
        {
            cin>>a>>d;
            b[i].val=a;//val
            b[i].weight=d;//weight
            b[i].avg=a/d;
        }
        sort(b,b+(int)n,comp);
        float sum=0,pro=0;
        i=0;
        while(i<(int)n)
        {
          //  cout<<"***"<<b[i].avg<<" ";
            i++;
        }//cout<<endl;
        i=0;
        while(sum+b[i].weight<=w&&i<(int)n)
        {//cout<<" ++sum "<<sum<<" pro "<<pro<<endl;
            sum+=b[i].weight;
            pro+=b[i].val;
            i++;
        }
        if(i<n)
        {
            float left=0,frac=0;
        left=w-sum;
        frac=left/b[i].weight;
        pro+=b[i].val*frac;
        }
       // cout<<" **sum "<<sum<<" pro ";
        printf("%.2f\n",pro);
       // cout<<pro<<endl;
    }
    return 0;
};