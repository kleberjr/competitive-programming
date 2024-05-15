#include <bits/stdc++.h>
#define lli long long int

using namespace std;

bool is_prime(lli n) {
  for (lli i = 11; i < n; i++) {
    if (n % i == 0) {
      return false;
    };
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    lli x, y;
    cin >> x >> y;

    lli diff = x - y;

    if (diff % 2 == 0) {
      cout << "YES\n";
      continue;
    }

    if (diff % 3 == 0) {
      cout << "YES\n";
      continue;
    }

    if (diff % 5 == 0) {
      cout << "YES\n";
      continue;
    }

    if (diff % 7 == 0) {
      cout << "YES\n";
      continue;
    }

    if (diff == 1) {
      cout << "NO\n";
      continue;
    }

    if (is_prime(diff)) {
      cout << "YES\n";
      continue;
    }

    string tmp;
    for (lli j = 11; j < diff; j++) {
      if (diff % j == 0) {
        if (is_prime(j)) {
          tmp = "YES";
          break;
        }
      }
    }

    if (tmp == "YES") {
      cout << tmp << "\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}