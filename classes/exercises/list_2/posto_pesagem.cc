#include <bits/stdc++.h>
#define qi queue<int>

using namespace std;

int main() {
  long long int n, f, p;
  cin >> n >> f >> p;

  int v;
  queue<int> fila;
  for (int i = 0; i < n; i++) {
    cin >> v;
    fila.push(v);
  }

  int t = 0;
  while(!fila.empty()) {
    int truck_w = fila.front();
    fila.pop();

    // Se é maior que o limite de peso, manda de volta pra fila com menos 2kg
    if (truck_w > p) {
      fila.push(truck_w - 2);
      t += 10;
    // Se está dentro do limite de peso, apenas soma o tempo
    } else {
      t += 5;
    }

    // Elimina os caminhões que não serão verificados
    for (int i = 0; i < f - 1; i++) {
      if (!fila.empty()) {
        fila.pop();
        t++;
      }
    }
  }

  cout << t;
  
  return 0;
}