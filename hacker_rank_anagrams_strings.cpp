#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  queue<char> q1, q2;
  for (int i = 0; a[i] != '\0'; i++) {
   // cout << a[i];
    q1.push(a[i]);
  }
 // cout << endl;
  for (int i = 0; b[i] != '\0'; i++) {
    //cout << b[i];
    q2.push(b[i]);
  }
  //cout << endl;
  int popper = 0;
  for (int i = 0; !q1.empty() && !q2.empty(); i++) {
    if (q1.front() != q2.front()) {
      if (q1.front() < q2.front()) {
       // cout << "poped " << q1.front() << endl;
        q1.pop();
        popper++;
      } else {
        //cout << "poped " << q2.front() << endl;
        q2.pop();
        popper++;
      }
    }
    if (q1.front() == q2.front()) {
      //cout << "poped " << q1.front() << endl;
      //cout << "poped " << q2.front() << endl;
      q1.pop();
      q2.pop();
    }
  }
  if (q1.empty() || q2.empty()) {
    if (q1.empty()) {
      cout << endl;
      while (!q2.empty()) {
      //  cout << q2.front();
        q2.pop();
        popper++;
      }
    } else {
      cout << endl;
      while (!q1.empty()) {
        //cout << q1.front();
        q1.pop();
        popper++;
      }
    }
  }
  //cout << popper << endl;
  return popper;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string a;
  getline(cin, a);

  string b;
  getline(cin, b);

  int res = makeAnagram(a, b);

  fout << res << "\n";

  fout.close();

  return 0;
}
