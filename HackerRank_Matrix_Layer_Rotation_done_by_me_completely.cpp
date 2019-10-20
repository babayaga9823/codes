#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> v, int r)
{
int i,j,m,n;
m=v.size();
n=v[0].size();
for(int j=0;j<r;j++)
{
        int indx=0;
      for(int p=0;m-p>0&&n-p>0;p+=2)
      {
            int a,b,c,d;
        a=v[0+indx][0+indx];
        b=v[0+indx][n-1-indx];
        c=v[m-1-indx][0+indx];
        d=v[m-1-indx][n-1-indx];
    for(i=0;i<n-p-1;i++)//left rotation
    {
       v[0+indx][i+indx]=v[0+indx][i+1+indx];
    }
    for(i=0;i<m-p-1;i++)//down
    {
       v[m-indx-1-i][0+indx]=v[m-indx-2-i][0+indx];
    }
    for(i=0;i<n-p-1;i++)//right
    {
       v[m-1-indx][n-1-i-indx]=v[m-1-indx][n-2-i-indx];
    }
     for(i=0;i<m-p-1;i++)//up
    {
       v[i+indx][n-1-indx]=v[i+1+indx][n-1-indx];
    }
    v[1+indx][0+indx]=a;
    v[m-1-indx][1+indx]=c;
    v[m-2-indx][n-1-indx]=d;
    indx++;
      }
}
for(int p=0;p<v.size();p++)
{
    for(int q=0;q<v[0].size();q++)
    {
        cout<<v[p][q]<<" ";
    }
    cout<<endl;
}
}

int main()
{
    string mnr_temp;
    getline(cin, mnr_temp);

    vector<string> mnr = split(rtrim(mnr_temp));

    int m = stoi(mnr[0]);

    int n = stoi(mnr[1]);

    int r = stoi(mnr[2]);

    vector<vector<int>> matrix(m);

    for (int i = 0; i < m; i++) {
        matrix[i].resize(n);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    matrixRotation(matrix, r);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
