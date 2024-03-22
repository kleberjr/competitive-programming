#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Problem: https://cses.fi/problemset/task/1068

int main() {
  ll int n;
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