#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int x;
  int left = 10;
  int right = 1;
  int top = 0;
  int bottom = 0;
  bool has_ones = false;
  string value;

  for (int r = 1; r <= n; r++) {
    cin >> value;

    for (int c = 1; c <= m; c++) {
      x = (int) value[c-1] - 48;

      if (x == 1) {
        has_ones = true;

        if (c < left) left = c;
        if (c > right) right = c;
        if (top == 0) top = r;
        
        bottom = r;
      }
    }    
  }
  
  if (has_ones) {
    cout << (right - left) + 1 << "x" << (bottom - top) + 1;
  } else {
    cout << "0x0";
  }

  return 0;
}