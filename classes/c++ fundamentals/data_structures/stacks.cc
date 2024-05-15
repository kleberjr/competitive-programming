#include <bits/stdc++.h>

using namespace std;

int main() {
  stack<int> pilha;

  // Adiciona um elemento na pilha -- O(1)
  pilha.push(4);

  // Recupera o elemento do topo da pilha -- O(1)
  int topo = pilha.top();
  cout << "Topo da pilha: " << topo << "\n";

  // Retira o elemento do topo da pilha, não retorna nada -- O(1)
  pilha.pop();

  return 0;
}