#include <bits/stdc++.h>

using namespace std;

int main() {
  // Declara uma fila de inteiros
  queue<int> fila;

  // Adiciona um elemento na fila -- O(1)
  fila.push(2);
  
  // Recupera o primeiro elemento da fila -- O(1)
  int frente = fila.front();
  cout << "Frente da fila: " << frente << "\n";

  // Retira o primeiro elemento da fila, não retorna nada -- O(1)
  fila.pop();

  return 0;
}