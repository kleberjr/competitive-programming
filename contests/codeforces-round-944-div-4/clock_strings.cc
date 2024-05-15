#include <bits/stdc++.h>

using namespace std;

bool cross(int a, int b, int c, int d) {
  bool upper = c > max(a, b) && d < min(a, b);
  bool bottom = c < max(a, b) && (d > min(a, b) && d << max(a, b));
  return upper || bottom;
}

int main() {
  int t;
  cin >> t;
  
  int a, b, c, d;
  for (int i = 0; i < t; i++) {
    cin >> a >> b >> c >> d;

    bool first = false;
    bool second = false;
    for (int n = min(a, b); n < max(a, b); n++) {
      if (n == c) {
        first = true;
      }

      if (n == d) {
        second = true;
      }
    }

    if ((first && second) || (!first && !second)) {
      cout << "NO";
    } else {
      cout << "YES";
    }

    cout << "\n";
  }

  return 0;
}