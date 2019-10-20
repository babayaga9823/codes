#include <bits/stdc++.h>


using namespace std;

vector<string> split_string(string);

struct hold{
    int data;
    int indx;
};
bool comp(hold a,hold b)
{
    return (a.indx<b.indx);
}
vector<int> absolutePermutation(int n, int k) 
{
int i,z,j,l=0;
struct hold h[n];
vector<int>v,r;
for(i=n;i>0;i--)
{
   int z;
  for(j=1;j<=n;j++)
  {
      if(abs(i-j)==k)
      {
            h[l].data=i;
            h[l].indx=j;
            l++;
            v.push_back(j);
            break;
      }
  }
 
}

    i=0;
   
    sort(v.begin(),v.end());
int pev=v[0],wong=0,exists=-99;
if(v.size()!=n)wong++;
if(wong==0)
{
    for(i=1;i<v.size();i++)
{
  if(v[i]==pev)
  {wong++;
      break;
  }
  else{
      pev=v[i];
  }
}
}
if(v.back()>n)wong++;

if(wong==0)exists=1;
 sort(h,h+n,comp);
   if(exists==1)
{
    i=0;
    while(i<v.size())
    {
       // cout<<h[i].indx<<" "<<h[i].data<<endl;
        r.push_back(h[i].data);
        cout<<h[i].data<<" ";
        i++;
    }

    cout<<endl;
    
}
else{
    cout<<-1<<endl;
     r.push_back(-1);
}
return r;
return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        vector<int> result = absolutePermutation(n, k);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
