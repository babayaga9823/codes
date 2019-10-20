#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.
bool comp(string a,string b)
{
    if(a.length()==b.length())return a<b;
    else return a.length()<b.length();
}
vector<string> bigSorting(vector<string> unsorted) 
{
vector<string>v;
for(int i=0;i<unsorted.size();i++)
{
    v.push_back(unsorted[i]);
}
sort(v.begin(),v.end(),comp);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}
return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

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
