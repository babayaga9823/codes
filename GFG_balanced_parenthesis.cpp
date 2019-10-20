#include <bits/stdc++.h>
using namespace std;

int main() {
int t=0;
 cin>>t;
 while(t--)
{
	 int n,m,z,i,j,max=0,cnt=0,er=0; 
string s;
cin>>s;
i=0;
stack<char>stk;
while(i<s.length())
{
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    {
        stk.push(s[i]);
    }
    else
    {
        if(!stk.empty()&&stk.top()=='('&&s[i]==')')
        {
            stk.pop();
        }
        else if(!stk.empty()&&stk.top()=='{'&&s[i]=='}')
        {
            stk.pop();
        }
        else if(!stk.empty()&&stk.top()=='['&&s[i]==']')
        {
            stk.pop();
        }
        else 
        {
            er++;
            break;
        }
    }
    i++;
}
if(stk.empty()&&er==0)cout<<"balanced"<<endl;
else cout<<"not balanced"<<endl;

}
	return 0;
}