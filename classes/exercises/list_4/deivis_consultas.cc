#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> v;
  v.push_back(0);

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  vector<long long int> psum(n+1, 0);
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + v[i];
  }

  int l, r;
  while(q--) {
    cin >> l >> r;

    cout << psum[r] - psum[l-1] << "\n";
  }

  return 0;
}