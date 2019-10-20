#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) 
{
long int count=0,i,j,c=0,mark;
count=s.length();
for(i=0;s[i]!='\0';i++)
{c=0;
    while(s[i+1]!='\0'&&s[i]==s[i+1])
    {
        c++;
        i++;
    }
    if(c!=0)
    {
        count+=c;
    }
    if(s[i]==s[i+2])
    {
        mark=i+1;
        j=1;
        c=0;
        while(s[mark+j]!='\0'&&s[mark-j]==s[mark+j]&&j>0&&s[mark-1]==s[mark-j])
        { cout<<"count "<<count<<" before "<<s[mark-j]<<" middle "<<s[mark]<<" after "<<s[mark+j]<<endl;
            c++;
            j++;
        }
        count+=c;
    }
}
cout<<"count"<<count<<endl;
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
