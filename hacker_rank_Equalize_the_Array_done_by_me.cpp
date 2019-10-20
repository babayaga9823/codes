#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the equalizeArray function below.
struct sia {
  int no;
  int fre;
};
bool comp(sia s1, sia s2) { return (s1.fre > s2.fre); }
int equalizeArray(vector<int> arr) {
  struct sia s[arr.size()];
  sort(arr.begin(), arr.end());
  int pev, i, c = 0, rc = 0;
  pev = arr[0];
  for (i = 1; i < arr.size(); i++) {
    if (pev == arr[i]) {
      c++;
    } else {
      s[rc].no = pev;
      s[rc].fre = c + 1;
      // cout<<"pev"<<pev<<"c+1 "<<c+1<<endl;
      pev = arr[i];
      c = 0;
      rc++;
    }
  }
  s[rc].no = pev;
  s[rc].fre = c + 1;
  // cout<<"out pev"<<pev<<"c+1 "<<c+1<<endl;
  rc++;
  sort(s, s + rc, comp);
  int subt = 0;
  subt = arr.size() - s[0].fre;
  // cout<<"ans"<<subt<<"fre"<<s[0].fre<<endl;
  return subt;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split_string(arr_temp_temp);

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
  }

  int result = equalizeArray(arr);

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
