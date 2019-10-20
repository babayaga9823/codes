#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
  int i, j, ind = 0, count = 0, s = 0;
  vector<int> v;
  sort(arr.begin(), arr.end());

  for (i = 0; i < arr.size(); i++) {
    count = 0;
    // cout << "ind " << ind << endl;
    s = arr[ind];
    for (j = 0; j < arr.size(); j++) {
      if (arr[j] != 0) {
        arr[j] = arr[j] - s;
        count++;
      }
    }
    // cout << "+++jjjjjjj" << j << "count " << count << endl;
    int pri = 0;
    while (pri < arr.size()) {
      // cout << "++++++i" << arr[pri] << " i " << i << endl;
      pri++;
    }
    if (count != 0)
      v.push_back(count);
    sort(arr.begin(), arr.end());
    ind = 0;
    while (arr[ind] == 0 && arr[0] == 0) {
      ind++;
    }
  }
  int pri = 0;
  while (pri < v.size()) {
    cout << v[pri] << endl;
    pri++;
  }
  return v;
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

  vector<int> result = cutTheSticks(arr);

  for (int i = 0; i < result.size(); i++) {
    fout << result[i];

    if (i != result.size() - 1) {
      fout << "\n";
    }
  }

  fout << "\n";

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
