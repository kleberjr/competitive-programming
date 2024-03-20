#include <bits/stdc++.h>
using namespace std;

int variables_and_types() {
  // type variable_name = value;
  int age = 21;
  string name = "Kleber";
  double weight = 17.5;
}

int main() {
  // variable type doesn't need to be declared
  cout << ">> printind with cout: Hello World!\n";

  // variable type needs to be declared (its faster than cout)
  printf("8");

  // prints with line break 
  puts(">> printing without cout: Hello World!");

  string first_name = "Kleber";
  string last_name = "Junior";
  string full_name = first_name + last_name;
}