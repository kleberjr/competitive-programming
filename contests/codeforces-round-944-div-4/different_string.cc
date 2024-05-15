#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;

    if (s.length() == 1) {
      cout << "NO" << "\n";
      continue;
    }

    bool possible = false;
    for (int j = 1; j < s.length(); j++) {
      if (s[j] != s[j - 1]) {
        swap(s[j], s[j - 1]);
        possible = true;
        break;
      }
    }

    if (possible) {
      cout << "YES" << "\n";
      cout << s << "\n";
      continue;
    }

    cout << "NO" << "\n";
  }

  return 0;
}