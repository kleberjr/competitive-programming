#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  long long int digitsSum = 0;
  long long int totalSum = 0;
  string digits = "";
  for (int i = 1; i <= n; i++) {
    digits = to_string(i);

    for (int j = 0; j < digits.length(); j++) {
      digitsSum = digitsSum + (int) digits[j] - 48;
    }

    if (digitsSum >= a && digitsSum <= b) {
      totalSum = totalSum + i;
    }

    digitsSum = 0;
  }

  cout << totalSum;

  return 0;
}