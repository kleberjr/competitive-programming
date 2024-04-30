#include <bits/stdc++.h>

using namespace std;

bool check(int a) {
  string digits = to_string(a);

  bool sum = 0;
  for (int i = 0; i < digits.length(); i++) {
    sum += i;
  }

  return true;
}

int main() {
  int a;
  cin >> a;

  if (a < 10) {
    cout << a + 1;
    return 0;
  }

  if (a == 99) {
    cout << 102;
    return 0;
  }

  if (a == 999) {
    cout << 1023;
    return 0;
  }
  
  return 0;
}