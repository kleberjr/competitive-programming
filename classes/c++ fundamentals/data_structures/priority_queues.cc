#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

class cmp {
  public:
    bool operator()(pii a, pii b) {
      if (b.second < a.second) {
        return false;
      }

      return true;
    }
};

void print_queue(priority_queue<int> a) {
  priority_queue<int> copy = a;

  cout << "[ ";
  for (int i = 0; i < a.size(); i++) {
    cout << copy.top();
    copy.pop();

    if (copy.empty()) {
      cout << " ]";
    } else {
      cout << " -> ";
    }
  }
  cout << "\n";
}

int main() {
  // Por padrão, a fila de prioridade é máxima
  priority_queue<int> pq_max;

  // Cada push é O(log n)
  pq_max.push(3);
  cout << "Inserindo 3 - "; print_queue(pq_max);
  pq_max.push(2);
  cout << "Inserindo 2 - "; print_queue(pq_max);
  pq_max.push(7);
  cout << "Inserindo 7 - "; print_queue(pq_max);
  pq_max.push(5);
  cout << "Inserindo 5 - "; print_queue(pq_max);

  // Para a fila de prioridade mínima, precisamos de um comparador específico
  priority_queue<int, vector<int>, greater<int>> pq_min;
  
  priority_queue<pii, vector<pii>, cmp> pq_pii;
  pq_pii.push(make_pair(1, 7));
  pq_pii.push(make_pair(2, 5));
  pq_pii.push(make_pair(3, 4));
  pq_pii.push(make_pair(5, 1));

  return 0;
}