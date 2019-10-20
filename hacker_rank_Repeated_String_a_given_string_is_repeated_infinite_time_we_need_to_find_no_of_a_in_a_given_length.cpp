#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
  long i = 0, d = 0, r = 0, count = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'a')
      count++;
  }
  d = n / s.length();
  r = n % s.length();
  count = count * (d);
  for (i = 0; i < r; i++) {
    if (s[i] == 'a')
      count++;
  }

  // cout<<"c "<<count;
  return count;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  long n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  long result = repeatedString(s, n);

  fout << result << "\n";

  fout.close();

  return 0;
}
