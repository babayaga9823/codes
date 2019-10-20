#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) 
{
long int i,n=s.length(),m,scnt=0;
string r= "hackerrank",ret;
m=r.length();
for(i=0;i<n;i++)
{
if(r[scnt]==s[i]&&scnt<r.length()&&i<n)scnt++;
if(scnt==r.length())break;
}
//cout<<"++ <<i<<endl;

if(scnt==r.length())ret="YES";
else ret="NO";

cout<<ret<<endl;
return ret;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
