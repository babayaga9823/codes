#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string r) 
{
    int i,n,cnt=0,j=0,cnts=0;
    string re;
    n=r.length();
    char s[1000];
    i=0;
    while(i<r.length())
    {int z=r[i];
        if(z>=65&&z<=90)
        {
        s[cnts]=z+32;
        cnts++;    
        }
        else if(r[i]==' ')
        {
            
        }
        else if(z>=97&&z<=122)
        {
        s[cnts]=z;
        cnts++;
       
        }
       i++; 
    }
    s[cnts]='\0';
sort(s,s+cnts);
//cout<<s<<endl;

 //cout<<" j "<<j<<" "<<s[j]<<endl;
for(i=0;i<cnts;i++)
{
int z=s[i];
if(z==(97+cnt))cnt++;
}
//cout<<" cnt "<<cnt<<endl;
if(cnt==26)
{
    
    re="pangram";
    cout<<re<<endl;
}
else
{
    re="not pangram";
    cout<<re<<endl;
}


return re;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
