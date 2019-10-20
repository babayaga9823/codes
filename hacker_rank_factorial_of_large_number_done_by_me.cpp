#include <bits/stdc++.h>

using namespace std;
int size = 1, i = 0, ar[200];

// Complete the extraLongFactorials function below.
void mult() {
  int carry = 0, push = 0;
  for (int j = 0; j < size; j++) {
    push = (ar[j] * i) + carry;
    ar[j] = push % 10;
    carry = push / 10;
  }
  while (carry) {
    ar[size] = carry % 10;
    carry /= 10;
    size++;
  }
}

void extraLongFactorials(int n) {
  ar[0] = 1;
  for (i = 2; i <= n; i++) {
    mult();
  }
}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  extraLongFactorials(n);
  for (int j = size - 1; j >= 0; j--) {
    cout << ar[j];
  }
  return 0;
}
