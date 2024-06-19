#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  int n, q, l, r;
  cin >> n;

  vector<int> v;
  v.push_back(0);

  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }

  vector<lli> psum(n+1, 0);
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + v[i];
  }

  return 0;
}