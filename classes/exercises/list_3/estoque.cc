#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;

  set<int> estoque;

  int t, m;
  for (int i = 0; i < q; i++) {
    cin >> t >> m;

    if (t == 1) {
      estoque.insert(m);
    }
    
    if (t == 2) {
      if (estoque.count(m)) {
        cout << "Sim" << "\n";
      } else {
        cout << "Nao" << "\n";
      }
    }
  }

  return 0;
}