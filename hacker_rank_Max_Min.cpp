#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
  sort(arr.begin(), arr.end());
  int unfair = 0, min = 0;

  for (int i = 0; i <= arr.size() - k; i++) {
    unfair = arr[i + k - 1] - arr[i];
    if (unfair < min || i == 0) {
      min = unfair;
    }
  }
  // cout<<"min "<<min<<endl;
  return min;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int k;
  cin >> k;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int arr_item;
    cin >> arr_item;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    arr[i] = arr_item;
  }

  int result = maxMin(k, arr);

  fout << result << "\n";

  fout.close();

  return 0;
}
