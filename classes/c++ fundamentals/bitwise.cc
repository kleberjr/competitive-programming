#include <bits/stdc++.h>

using namespace std;

void possibleSubsets(char s[], int n) {
  // printar os possíveis subsets de um set com n elementos

  // itera por todas as representações de um número
  for (int i = 0; i < (1 << n); i++) {

    // itera por todos os bits da representação
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        cout << s[j] << ' ';
      }
    }

    cout << "\n";
  }

}

int CLSB(int n) {
  return n & (n - 1);
}

int main() {
  char subset[3] = {'p', 'q', 'f'};

  possibleSubsets(subset, 3);

  return 0;
}