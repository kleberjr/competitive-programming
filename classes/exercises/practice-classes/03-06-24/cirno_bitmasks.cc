#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, x;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> x;

    if (x == 1) {
      cout << 3 << "\n";
      continue;
    }

    if (x % 2 != 0) {
      cout << 1;
    } else {
      int next = x + 1;

      int closest_active_bit = 0;
      while(x % 2 == 0) {
        closest_active_bit++;
        x = x >> 1;
      }

      int tmp = pow(2, closest_active_bit);

      if (tmp != next-1) {
        cout << min(next, tmp);
      } else {
        cout << next;
      }
    }

    cout << "\n";
  }

  return 0;
}

// (and) numeros pares: min(2^k, prox inteiro)
// (and) numeros ímpares: 1


// -- AND --
// 0000 0010
// 0000 0011
// ---------
// 0000 0000

// -- XOR --
// 1111 0100 0010 0100 0000
// 0000 0000 0000 0000 0001
// ---------
// 0000 0001