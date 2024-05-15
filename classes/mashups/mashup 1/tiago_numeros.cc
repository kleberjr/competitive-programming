#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  int t;
  cin >> t;

  lli x;
  for (int i = 0; i < t; i++) {
    cin >> x;

    if (x % 2 == 0) {
      cout << x/2 << " " << x/2 << "\n";
      continue;
    }

    cout << 1 << " " << x - 1 << "\n";
  }

  return 0;
}