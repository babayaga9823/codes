#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int i = 0;
  stack<int> q1, q2;
  while (i < n) {
    int r;
    cin >> r;
    if (r == 1) {
      int a;
      cin >> a;
      q1.push(a);

    } else {
        if(q2.empty())
        {
          while (!q1.empty()) {
            int b;
            b = q1.top();
            q1.pop();
            q2.push(b);
          }
        }
        if (!q2.empty()) {

          if (r == 2) {
            q2.pop();
          }

          if (r == 3) {
            cout << q2.top() << endl;
          }
        }
    }

    i++;
  }
  return 0;
}
