#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
struct store
{
    int data;
    int freq;
};
bool comp(store s1,store s2)
{
    return s1.freq>s2.freq;
}
int alternate(string s) 
{
    store str[s.length()];
string r=s;
int i,c=0,strcnt=0,pev=0,fc=0;
sort(r.begin(),r.end());
i=0;
while(i<r.length())
{
    cout<<r[i]<<endl;
    i++;
}
pev=r[0];
int cnt=1;
for(i=1;i<s.length();i++)
{
    if(r[i]==pev)cnt++;
    else{
        if(i<s.length()-1)
        {
            cout<<" =="<<r[i-1]<<i<<endl;
        str[strcnt].data=r[i-1];
        str[strcnt].freq=cnt;
        strcnt++;
        pev=r[i];
        cnt=1;    
        }
        else{
            str[strcnt].data=r[i-1];
        str[strcnt].freq=cnt;
        strcnt++;
            str[strcnt].data=r[i];
        str[strcnt].freq=1;
        strcnt++;
        }
        
    }
    if(i==s.length()-1&&r[i]==pev)
    {
        str[strcnt].data=r[i-1];
        str[strcnt].freq=cnt;
        strcnt++;
    }
}
sort(str,str+strcnt,comp);
i=0;
while(i<strcnt)
{char ch=str[i].data;
    cout<<"struct "<<str[i].freq<<" char"<<ch<<endl;
    i++;
}

pev=str[0].freq;
for(i=1;i<strcnt;i++)
{
    if(str[i].freq==pev||)
    {
        fc++;
        break;
    }
    else
    {
        pev=str[i].freq;
    }
    
    
}

if(fc==0)cout<<0<<endl;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
    