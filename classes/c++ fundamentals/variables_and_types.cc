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

  // Agrupam pares de informação de acordo com o tipo
  pair<int, int> p1 = make_pair(0, 1);
  pair<int, string> p2 = make_pair(0, "teste");
  pair<int, int> p3 = make_pair(0, 2);

  // Os pares podem ser comparados, mas apenas aqueles do mesmo tipo
  if (p1 > p3) {
    cout << "O par p1 é maior que o p3";
  } else {
    cout << "O par p3 é maior que o p1";
  }

  // Inicializa um array de inteiros com 2 posições
  int v[2] = {0, 1};
  // Se tentarmos acessar o array assim, receberemos o endereço de memória do primeiro elemento
  cout << v[0];

  int* p = v;   // p é um ponteiro que aponta para v[0]
  p++;          // Agora ele aponta pra v[1]
  
  return 0;
}