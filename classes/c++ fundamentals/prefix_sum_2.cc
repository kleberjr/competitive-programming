#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int aux, n, q, l, r;
  cin >> n;  
  
  vector<int> v;
  v.push_back(0);

  // O(n)
  for (int i = 0; i < n; i++) {
    int aux;
    cin >> aux;
    v.push_back(aux);
  }

  // O(q*n) -- no pior caso q = 2x10^5 e n = 2x10^5, que estoura o limite de 1s
  // while(q--) {
  //   cin >> l >> r;
    
  //   int sum = 0;
  //   // O(n)
  //   for (int i = l; i <= r; i++) {
  //     sum += v[i];
  //   }
  // }

  vector<ll> psum(n+1, 0);
  // O(n)
  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + v[i];
    cout << psum[i] << " ";
  }

  // O(q)
  while(q--) {
    cin >> l >> r;
    
    cout << psum[r] - psum[l-1] << "\n";
  }






  // TLE
  // while(q--) {
  //   for (int i = l; i <= r; i++) {
  //     v[i] += x;
  //   }
  // }



  return 0;
}