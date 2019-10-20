#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.
int queensAttack(int n, int k, int rq, int cq, vector<vector<int>> obstacles) {
  int count = 0, d1r, d2r, d1c, d2c, i, j, ar[n + 1][n + 1], r, c;
  count = (2 * n) - 2;
  d1r = rq;
  d1c = cq;
  for (i = 1; i <= n; i++) {

    for (j = 1; j <= n; j++) {

      ar[i][j] = 0;
    }
  }
  int sub = 0, e = 0;

  for (i = 0; i < obstacles.size(); i++) {
    r = obstacles[i][0];
    c = obstacles[i][1];
    if (r == rq) {
      if (c > cq) {
        e = n + 1 - c;
      }
      if (c < cq) {
        e = c;
      }
      sub += e;
    }

    if (c == cq) {
      if (r > rq) {
        e = n + 1 - r;
      }
      if (r < rq) {
        e = r;
      }
      sub += e;
    }
    ar[r][c] = 1;
  }

  while (d1r < n && d1c < n) {

    d1r++;
    d1c++;
    if (ar[d1r][d1c] == 0) {
      count++;
    } else {
      break;
    }
  }
  d1r = rq;
  d1c = cq;
  while (d1r > 1 && d1c > 1) {

    d1r--;
    d1c--;
    if (ar[d1r][d1c] == 0) {
      count++;
    } else {
      break;
    }
  }
  d1r = rq;
  d1c = cq;
  while (d1r < n && d1c > 1) {

    d1r++;
    d1c--;
    if (ar[d1r][d1c] == 0) {
      count++;
    } else {
      break;
    }
  }
  d1r = rq;
  d1c = cq;
  while (d1r > 1 && d1c < n) {

    d1r--;
    d1c++;
    if (ar[d1r][d1c] == 0) {
      count++;
    } else {
      break;
    }
  }
  //cout << "c" << count - sub << endl;
  int t;
  t = count - sub;
  return t;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string nk_temp;
  getline(cin, nk_temp);

  vector<string> nk = split_string(nk_temp);

  int n = stoi(nk[0]);

  int k = stoi(nk[1]);

  string r_qC_q_temp;
  getline(cin, r_qC_q_temp);

  vector<string> r_qC_q = split_string(r_qC_q_temp);

  int r_q = stoi(r_qC_q[0]);

  int c_q = stoi(r_qC_q[1]);

  vector<vector<int>> obstacles(k);
  for (int i = 0; i < k; i++) {
    obstacles[i].resize(2);

    for (int j = 0; j < 2; j++) {
      cin >> obstacles[i][j];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  int result = queensAttack(n, k, r_q, c_q, obstacles);

  fout << result << "\n";

  fout.close();

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end =
      unique(input_string.begin(), input_string.end(),
             [](const char &x, const char &y) { return x == y and x == ' '; });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(
      input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}
