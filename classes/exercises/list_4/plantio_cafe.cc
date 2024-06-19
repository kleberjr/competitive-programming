#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  int n, q, t;
  cin >> n >> q >> t;

  vector<int> delta(n+2, 0);

  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;

    delta[l] += x;
    delta[r+1] -= x;
  }

  int lotes_bons = 0;
  vector<long long int> psum(n+1, 0);
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + delta[i];

    if (psum[i] >= t) {
      lotes_bons++;
    }
  }

  cout << lotes_bons;

  return 0;
}