#include <bits/stdc++.h>

using namespace std;

int manhattan(int xa, int ya, int xb, int yb) {
  return abs(xa - xb) + abs(ya - yb);
}

int main() {
  int n, xc, yc;
  cin >> n >> xc >> yc;

  long long int v;
  int x, y, p, l;
  
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> p;

    int m = manhattan(xc, yc, x, y);
    
    if ((m * 2) + p == v) continue;
    
    if (((m * 2) + p) < v) {
      v = (m * 2) + p;
      l = i + 1;
    }
  }

  cout << v << " " << l;

  return 0;
}