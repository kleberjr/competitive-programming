#include <bits/stdc++.h>
using namespace std;

// O c++ tem uma função principal, que sempre retorna um inteiro pro SO.
int main() {
  // Imprime qualquer coisa, mas sem quebra de linha automática
  cout << "Hello World!\n";
  cout << "My name is " << "Kleber, I am " << 21 << " years old!\n";
  
  // Imprime strings com quebra de linha automática
  puts("Nice to meet you!");

  // Permite a leitura de qualquer tipo de dado
  int age;
  cin >> age;

  // Imprime e põe uma quebra de linha no final
  cout << "My age is " << age << endl;

  // Leitura de uma linha com múltiplos inputs separados por espaço, ex: 1 2 3
  int a, b, c;
  cin >> a >> b >> c;

  // Leitura de uma linha com múltiplos inputs separados por espaço, ex: 1 2 3
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    cout << "O " << i << "º número inserido foi " << x << endl;
  }

  // Agrupam pares de informação de acordo com o tipo, podem ser comparados e isso leva O(1)
  pair<int, int> p1 = make_pair(0, 1);
  pair<int, string> p2 = make_pair(0, "teste");

  return 0;
}