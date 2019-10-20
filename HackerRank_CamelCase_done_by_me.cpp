#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

int i,c=0;
for(i=0;i<s.length();i++)
{int z=s[i];
    if(z>=65&&z<=90)c++;
}
cout<<c+1<<endl;
return c+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
