#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
  int i, sh = 5, lk = 0, count = 0;
  for (i = 1; i <= n; i++) {
    lk = sh / 2;
    sh = lk * 3;
    count += lk;
  }
  // cout<<count<<endl;
  return count;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int result = viralAdvertising(n);

  fout << result << "\n";

  fout.close();

  return 0;
}
