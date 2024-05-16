#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  stack<pii> estacionamento;
  for (int i = 0; i < n; i++) {
    int c, s;
    cin >> c >> s;

    estacionamento.push(make_pair(c, s));
  }

  return 0;
}