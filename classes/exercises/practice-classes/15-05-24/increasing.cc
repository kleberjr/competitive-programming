#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    set<int> c;
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      c.insert(a);
    }

    if (c.size() == n) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  
  return 0;
}