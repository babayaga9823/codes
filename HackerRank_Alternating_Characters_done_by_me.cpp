#include <bits/stdc++.h>

using namespace std;



int alternatingCharacters(string s) 
{
char c[100010];
int cnt=0,i,pev,cur,el=0;
pev=s[0];
c[cnt]=s[0];
cnt++;
for(i=1;i<s.length();i++)
{
    if(pev==s[i])
    {
        
    }
    else
    {el++;
        c[cnt]=s[i];
        cnt++;
        pev=s[i];
    }

}
if(s[s.length()-2]==s[s.length()-1]&&el!=0);
{
     c[cnt]=s[i];
        cnt++;
}
c[cnt]='\0';
cnt=cnt-1;
//cout<<c<<endl;
int z=s.length();
//cout<<"***"<<cnt<<"++"<<z<<endl;
cout<<z-cnt<<endl;
return s.length()-cnt;
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

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
