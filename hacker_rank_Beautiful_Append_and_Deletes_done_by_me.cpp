#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
  string r;
  int i, j, count = 0, del = 0, newad = 0, final = 0, x = 0, y = 0;
  for (i = 0; s[i] == t[i]; i++) {
    count++;
  }
  del = s.length() - count;
  newad = t.length() - count;
  x = k - newad;
  if (del >= s.length()) {
    x = x - del;
    while (x != 0) {
      x--;
    }
  }
  final = del + newad;
  if (final == k || x == 0)
    r = "Yes";
  else
    r = "No";
  // cout<<" r "<<r<<endl;
  return r;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string t;
  getline(cin, t);

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string result = appendAndDelete(s, t, k);

  fout << result << "\n";

  fout.close();

  return 0;
}
