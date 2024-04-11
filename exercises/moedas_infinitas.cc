#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  if (a >= n) {
    cout << "Sim";
    return 0;
  }

  if (n % 500 <= a) {
    cout << "Sim";
    return 0;
  }

  cout << "Nao";

  return 0; 
}