#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> delta(n+2, 0);

  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;

    delta[l] += x;
    delta[r+1] -= x;
  }

  vector<long long int> psum(n+1, 0);
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + delta[i];
  }

  for (int i = 1; i <= n; i++) {
    cout << psum[i] << " ";
  }

  return 0;
}