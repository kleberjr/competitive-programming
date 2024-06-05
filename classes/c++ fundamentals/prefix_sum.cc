#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int aux, n;
  cin >> n;  
  
  vector<int> v;
  // posição 0 é a posição fantasma
  v.push_back(0);

  for (int i = 0; i < n; i++) {
    int aux;
    cin >> aux;
    v.push_back(aux);
  }

  // soma acumulada dos elementos de um vetor

  // inicializa o vetor de tamanho n+1 com 0 em todas as posições
  vector<ll> psum(n+1, 0);

  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i-1] + v[i];
    cout << psum[i] << " ";
  }

  return 0;
}