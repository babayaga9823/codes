#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
  int i, finalcount = 0;
  for (i = p; i <= q; i++) {
    long long int z, c = 0, d = 0, n = 0, sq = 0, l = 0, r = 0;
    stack<long long int> ls, rs;
    n = i;
    z = i;
    while (z != 0) {
      z /= 10;
      d++;
    }
    // cout<<"no of z "<<d;
    sq = pow(n, 2);
    z = sq;
    long long int cr = 0;
    while (z != 0) {
      z /= 10;
      cr++;
    }
    // cout<<"no of z^2 "<<cr<<sq<<endl;
    long long int reserv = 0, counter = 0;
    z = sq;
    // cout<<"rese "<<reserv<<"z "<<z<<endl;
    long long int po = 0;
    while (z != 0) {
      po = z % 10;
      if (reserv < d) {
        // cout<<"::::: rs"<<po<<endl;
        rs.push(po);
      } else {
        // cout<<"::::: ls"<<po<<endl;
        ls.push(po);
      }
      z /= 10;
      reserv++;
    }

    // next part
    long long int cls = 0, hl, dl = 0, sl = 0;
    sl = ls.size();
    while (!ls.empty()) {
      hl = ls.top();
      ls.pop();
      cls = cls + hl * pow(10, sl - dl - 1);
      dl++;
    }
    l = cls;
    //  cout<<"*********"<<cls<<endl;

    long long int crs = 0, hr, dr = 0, sr = 0;
    sr = rs.size();
    while (!rs.empty()) {
      hr = rs.top();
      rs.pop();
      crs = crs + hr * pow(10, sr - dr - 1);
      dr++;
    }
    r = crs;
    // cout<<"*********"<<crs<<endl;
    // cout<<"stack len"<<ls.size()<<endl;
    // cout<<"stack len"<<rs.size()<<endl;
    if (n == l + r && (l == 1 || r > 0)) {
      cout << n << " ";
      finalcount++;
    }
  }
  if (finalcount == 0) {
    cout << "INVALID RANGE" << endl;
  }
}

int main() {
  long long int p;
  cin >> p;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  long long int q;
  cin >> q;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  kaprekarNumbers(p, q);

  return 0;
}
