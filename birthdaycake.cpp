#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, x, y, d, m, j, s, c, fs = 0, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> d >> m;
  x = d;
  y = m;

  for (int i = 0; i < n; i++) {
    c = 0;
    s = 0;
    j = i;
    while (j < n && s <= d) {
      s = s + a[j];
      j++;
      c++;

      if (c == m && s == d) {

        fs++;
      }
    }
    
  }
  cout << fs << endl;
  return 0;
}