#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) 
{
    string r=w;
sort(r.begin(),r.end());
int c=1,i,a,b,sw,zi,yi,y,pev,z;
pev=r[0];
a=r[0];
for(i=1;i<r.length()&&c<2;i++)
{
    if(pev==r[i])
    {
        
    }
    else
    {b=r[i];
        c++;
    }
}
if(c==2)
{
   y=0;
   z=0;
for(i=0;i<r.length();i++)
{
   
  if(w[i]==a) 
  { if(z==0)zi=i;
       z++;
  }
   if(w[i]==b)
   {
       if(y==0)yi=i;
       y++;
   }
}
 int reserve;
 w[zi]=b;
 w[yi]=a;
   
   
}
else
{w="no answer";
    
}
 cout<<w<<endl;
    return w;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
