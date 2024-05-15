#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  int x, y;
  for (int i = 0; i < t; i++) {
    cin >> x >> y;

    cout << min(x, y) << " " << max(x, y) << "\n";
  }

  return 0;
}