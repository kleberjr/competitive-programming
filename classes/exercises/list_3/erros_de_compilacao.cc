#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n;

  int first[n];
  int second[n-1];
  int third[n-2];

  for (int i = 0; i < n; i++) { 
    cin >> x;
    first[i] = x;
  }
  sort(first, first + n);

  for (int i = 0; i < n-1; i++) {
    cin >> x;
    second[i] = x;
  }
  sort(second, second + n-1);

  for (int i = 0; i < n-2; i++) {
    cin >> x;
    third[i] = x;
  }
  sort(third, third + n-2);

  for (int i = 0; i < n; i++) {
    if (first[i] != second[i]) {
      cout << first[i] << "\n";
      break;
    }
  } 

  for (int i = 0; i < n-1; i++) {
    if (second[i] != third[i]) {
      cout << second[i] << "\n";
      break;
    }
  } 

  return 0;
}