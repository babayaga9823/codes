#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
  int i = 0, sp = 0, l = 0, up, lw, j = 0, sz = 0, c = 0, ch = 0;

  while (s[i] != '\0') {
    if (s[i] == ' ')
      sp++;
    i++;
  }
  l = s.length() - sp;
  lw = floor(sqrt(l));
  sp = ceil(sqrt(l));

  if (lw * sp < l) {
    lw++;
  }

  char mat[lw + 1][sp + 1], r[1000], *p;
  for (i = 0; i < lw; i++) {
    for (j = 0; j < sp; j++) {
      if (sz >= s.length()) {
        mat[i][j] = '1';
       // cout << " i " << i << " j " << j << endl;
        continue;
      }

      if (s[sz] == ' ')
        sz++;

      mat[i][j] = s[sz];
      sz++;
      ch++;
    }
  }
  //cout << "++" << mat[0][3] << endl;
  int sum = 0;
  for (i = 0; i < lw; i++) {
    for (j = 0; j < sp; j++) {
      //cout << mat[i][j];
      sum++;
    }
   // cout << endl;
  }

  c = 0;
  sum = 0;
 // cout << "*******" << endl;
  for (i = 0; i < sp && sum < l; i++) {
    for (j = 0; j < lw && sum < l; j++) {
      if (mat[j][i] == '1')
        continue;
     // cout << mat[j][i];
      r[c] = mat[j][i];
      c++;
      sum++;
    }
    r[c] = ' ';
    c++;
   // cout << endl;
  }
  r[c] = '\0';
 // cout << ":::::::::::::::" << endl;
  cout << r << endl;
  return r;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = encryption(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
