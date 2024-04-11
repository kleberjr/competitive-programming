#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int x;
  long long int sum = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    sum = sum + x;
    if (x > max) {
      max = x;
    }
  }

  cout << (max*n) - sum;

  return 0; 
}