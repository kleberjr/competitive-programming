#include <bits/stdc++.h>

#define t3i tuple<int, int, int>
#define pqmin priority_queue<t3i, vector<t3i>, cmp>

using namespace std;

class cmp {
  public:
    bool operator()(t3i a, t3i b) {
      if (get<2>(a) < get<2>(b)) {
        return false;
      }

      if (get<2>(a) == get<2>(b)) {
        if (get<0>(a) < get<0>(b)) {
          return false;
        }
      }

      return true;
    }
};

int main() {
  int n, m;
  cin >> n >> m;

  pqmin caixas_livres;
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    caixas_livres.push(make_tuple(i, v, 0));
  }

  queue<int> clientes;
  for (int i = 0; i < m; i++) {
    int c;
    cin >> c;
    clientes.push(c);
  }

  while(!clientes.empty()) {
    if (!caixas_livres.empty()) {
      int cliente = clientes.front();
      clientes.pop();

      t3i caixa = caixas_livres.top();
      caixas_livres.pop();
      
      get<2>(caixa) += get<1>(caixa) * cliente;
      caixas_livres.push(caixa);
    }
  }

  int t = 0;
  while(!caixas_livres.empty()) {
    int tempo_caixa = get<2>(caixas_livres.top());
    t = max(tempo_caixa, t);
    caixas_livres.pop();
  }

  cout << t;

  return 0;
}