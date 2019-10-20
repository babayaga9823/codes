#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) 
{
    int i,n,pev=0,cnt=0,val=0;
    vector<int>v;
    vector<string>r;
    n=s.length();
    pev=s[0];
    val=s[0]-96;
    cnt++;
    v.push_back(cnt*val);
    for(i=1;i<n;i++)
    {int z=s[i];
        if(pev==z)
        {
            cnt++;
            //cout<<"pusehed if "<<cnt*val<<endl;
            v.push_back(cnt*val);
        }
        else
        {
            
            val=s[i]-96;
            cnt=1;
           // cout<<"pusehed else "<<cnt*val<<endl;
            v.push_back(cnt*val);
            pev=s[i];
        }
    }

 i=0;
sort(v.begin(),v.end());

for(i=0;i<queries.size();i++)
{
int z=queries[i],flag=0,mark=0,l;

 l=0;
while(l<v.size())
{
   if(z==v[l])flag++;
   if(v[l]>z)break;
    l++;
}
    if(flag==0)
    {
        r.push_back("No");
    }
    else r.push_back("Yes");
}

int l=0;
while(l<r.size())
{
    cout<<r[l]<<endl;
   l++;
}
return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
