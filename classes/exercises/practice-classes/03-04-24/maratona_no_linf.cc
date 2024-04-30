#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, c;
  cin >> n >> c;

  int x;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    sum = sum + x;
  }

  cout << min(sum, c)/3;

  return 0;
}