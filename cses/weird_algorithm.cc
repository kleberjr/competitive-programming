#include <bits/stdc++.h>
using namespace std;

// Problem: https://cses.fi/problemset/task/1068

int main() {
  long long int n;
  scanf("%lld", &n);

  printf("%lld", n);

  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n) + 1;
    }
    printf(" %lld", n);
  }

  return 0;
}