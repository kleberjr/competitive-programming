#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  lli t;
  cin >> t;

  lli a, b, c;
  for (lli i = 0; i < t; i++) {
    cin >> a >> b >> c;

    if (a < b && b < c) {
      cout << "STAIR" << endl;
      continue;
    }

    if (a < b && b > c) {
      cout << "PEAK" << endl;
      continue;
    }

    cout << "NONE" << endl;
  }

  return 0;
}