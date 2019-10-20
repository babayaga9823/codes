#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
bool comp(string s1,string s2)
{
return s1.length()<s2.length();
}
int gemstones(vector<string>v) 
{
int i,j,finalcnt=0,alp=0;
sort(v.begin(),v.end(),comp);
sort(v[0].begin(),v[0].end());
char c[1010];
int pev=v[0][0];
c[alp]=pev;
alp++;
string h;
for(i=1;i<v[0].length();i++)
{
    if(pev==v[0][i]){}
    else
    {
        pev=v[0][i];
        c[alp]=pev;
        alp++;
    }
}

if(v[0][v[0].length()-1]==v[0][v[0].length()-2])
{
    c[alp]=v[0][v[0].length()-1];
        alp++;
}
c[alp]='\0';
v[0]=c;
for(i=0;i<v[0].length();i++)
{
    int cnt=0;
for(j=0;j<v.size();j++)
{
if(v[j].find(v[0][i])!=string::npos)cnt++;
else break;
}
if(cnt==v.size())finalcnt++;
}
cout<<finalcnt<<endl;
return finalcnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
