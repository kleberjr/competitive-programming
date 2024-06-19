#include <bits/stdc++.h>

using namespace std;

int main() {

  cout << "XOR =======================================" << "\n";
  for (int i = 1; i < 11; i++) {
    for (int j = 0; j < 20; j++) {
      cout << i << " | " << j << " -> ";
      cout << (i ^ j) << "\n";
    }
  }

  // cout << "\nOR =======================================" << "\n";
  // for (int i = 1; i < 11; i++) {
  //   for (int j = 0; j < 65; j++) {
  //     cout << i << " | " << j << " -> ";
  //     cout << (i | j) << "\n";
  //   }
  // }

  return 0;
}