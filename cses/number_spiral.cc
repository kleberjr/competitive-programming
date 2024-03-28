#include <bits/stdc++.h>
#define lli long long int

using namespace std;

// Problem: https://cses.fi/problemset/task/1071/

int main() {
  lli t;
  cin >> t;

  lli row, column;
  for (lli i = 0; i < t; i++) {
    cin >> row >> column;
    
    lli m = max(row, column);
    lli diagonal = (m * m) - (m - 1);
    lli diff = abs(row - column);

    if (m % 2 == 0) {
      if (row > column) {
        cout << diagonal + diff << endl;
        continue;
      }

      if (row < column) {
        cout << diagonal - diff << endl;
        continue;
      }
    } else {
      if (row > column) {
        cout << diagonal - diff << endl;
        continue;
      }

      if (row < column) {
        cout << diagonal + diff << endl;
        continue;
      }
    }

    cout << diagonal << endl;
  }
 
  return 0;
}