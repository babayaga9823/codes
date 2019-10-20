#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.

vector<string> cavityMap(vector<string> grid) {
  int n = grid.size(), i, j, cnt = 0, fc = 0,row=0,colmn=0;
  char ar[1000][1000], r[1000];
  vector<string> v;
  for (i = 0; i < grid.size(); i++) {
    row = i;
    colmn = 0;
    for (j = 0; j < grid[i].size(); j++) {
    
      ar[row][colmn] = grid[i][j];
      colmn++;
    }
  }
  for (i = 1; i < grid.size() - 1; i++) {
    for (j = 1; j < grid[i].size() - 1; j++) {
      int w = 0, s = 0, a = 0, d = 0, x = 0, chk = 0;
      s = grid[i][j] - 48;
      w = grid[i - 1][j] - 48;
      x = grid[i + 1][j] - 48;
      d = grid[i][j + 1] - 48;
      a = grid[i][j - 1] - 48;
      if (s > w && s > x && s > d && s > a) {
        ar[i][j] = 'X';
      }
    }
  }

  // print
  // cout<<endl;
  int vc = 0;
  for (i = 0; i < grid.size(); i++) {
    fc = 0;
    for (j = 0; j < grid[i].size(); j++) {
      // cout<<ar[i][j]<<" ";
      r[fc] = ar[i][j];
      fc++;
    }
    r[fc] = '\0';
    v.push_back(r);

    // cout<<endl;
  }

  // cout<<"++++"<<endl;
  i = 0;
  while (i < v.size()) {
    cout << v[i] << endl;
    i++;
  }
  return v;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<string> grid(n);

  for (int i = 0; i < n; i++) {
    string grid_item;
    getline(cin, grid_item);

    grid[i] = grid_item;
  }

  vector<string> result = cavityMap(grid);

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
