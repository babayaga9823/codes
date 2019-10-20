#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s;
	int z=s[0].size(),l=0,r,divd,rem=0,i=0,remand;
	s.push_back("10101");
r=stoi(s[0]);
    divd=r;
    while(divd!=0)
    {
    	
    	remand=divd%10;
    //	cout<<"rem "<<rem<<" divd "<<divd<<" i "<<pow(2,i)<<" remand "<<remand<<endl;
       rem=rem+(remand)*pow(2,i); 
       divd/=10;
       i++;
    }
    cout<<"decimal "<<rem<<endl;
	return 0;
}