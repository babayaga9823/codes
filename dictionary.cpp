#include <algorithm>
#include <iostream>
using namespace std;
struct dict {
  long int z;
  string s;
};
int main() {
  int n, m = 0;
  string sr;
  cin >> n;
  struct dict d[n];
  for (int i = 0; i < n; i++) {
    cin >> d[i].s >> d[i].z;
  }

  for (int i = 0; i < n; i++) {
    m = 0;
    cin >> sr;
    for (int j = 0; j < n; j++) {
      if (sr == d[j].s) {
        cout << d[j].s << "=" << d[j].z << endl;
        m++;
        break;
      }
    }
    if (m == 0) {
      cout << "Not found" << endl;
    }
  }
  return 0;
}