#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  queue<int> fila;
  for (int i = 1; i <= n; i++) {
    fila.push(i);
  }

  int rounds, movements, current_size;
  for (int i = 0; i < k; i++) {
    cin >> rounds;

    movements = (rounds % fila.size());

    while(movements--) {
      int tmp = fila.front();
      fila.pop();
      fila.push(tmp);
    }

    cout << fila.front() << " ";

    fila.pop();
  }

  return 0;
}