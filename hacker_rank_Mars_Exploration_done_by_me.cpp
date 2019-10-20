#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) 
{
int i,n,cnt=0;
n=s.length();
for(i=0;i<=n-3;i=i+3)
{
    if(s[i]!='S')cnt++;
    if(s[i+1]!='O')cnt++;
    if(s[i+2]!='S')cnt++;
}
cout<<cnt<<endl;
return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
