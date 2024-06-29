#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  lli n, i;
  cin >> n;

  i = n;
  int k = 0;
  while(i) {
    k++;
    i = i >> 1;
  }

  lli bitmask = pow(2, k) - 1;

  cout << n << " " << (n ^ bitmask);

  return 0;
}