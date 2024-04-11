#include <bits/stdc++.h>

using namespace std;

int main() {
  // type name [size];
  int v[10];
  double vd[30];
  char str[101];

  for (int i = 0; i < 10; i++) {
    printf("End. do vetor v[%d]: %p, número dentro do vetor: %d\n", i, v+i, *(v+1)); 
    // v é ponteiro, i é inteiro
    // v + i é aritmética de ponteiros, uma operação que ocorre no domínio dos ponteiros
  }

  printf("\n");

  int a, b;
  int *pont_a;

  a = 5;
  b = 7;
  pont_a = &a;

  // ponteiros são variáveis que armazenam endereços
  // * é o operador indireto, ele acessa o valor armazenado no enderço apontado por um ponteiro
  // & referencia o endereço de uma variável

  printf("Endereço da variável a: %p\n", &a);
  printf("Valor de a acessado diretamente pela variável: %d\n", a);
  printf("Valor de a acessado por meio de ponteiro: %d\n", *pont_a);
  
  printf("Endereço da variável pont_a: %p\n", &pont_a);
  printf("Valor da variável pont_a: %p\n", pont_a);


  int *x;

  // aloca dinamicamente um vetor de 10 inteiros (?)
  x = (int *) malloc(10*sizeof(int));
  
  // por ser alocado em tempo de EXECUÇÃO, mesmo que esteja dentro de uma função, n vai ser limpado quando a função sair da pilha
  // pois o compilador não sabia quais as variáveis a função teria na hora de alocar os recursos de pilha pra ela
  // tem q limpar o espaço se n da vazamento de memória, n tem garbage collector
  free(x);

  return 0;
}