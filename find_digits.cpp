#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int N;
		cin>>N;
		
		int tmp=N,cnt=0;
		while(tmp!=0)
		{
			int r=tmp%10;
			if(r!=0&&N%r==0)//r ta sabu bele starting re rakhibaku padiba becoz ae ta hee check kariba ki amara demonimator =0 hebani jemiti ,ddenominator =0 hele prgm runt time error dekhaeba
			    cnt++;
			   tmp/=10;
		}
		cout<<cnt<<endl;
	}
	return 0;
}