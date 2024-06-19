#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string a, b;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << "\n"; 
  }

  return 0;
}