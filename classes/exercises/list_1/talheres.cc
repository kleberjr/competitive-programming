#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n, g, f, c;
  cin >> n >> g >> f >> c;

  if (c >= n) {
    cout << n;
    return 0;
  }

  cout << min((c + min(g, f)), n);

  return 0; 
}