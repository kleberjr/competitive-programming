#include <bits/stdc++.h>
#define t4i tuple<int, int, int, int>
#define t3i tuple<int, int, int>
#define pqmin priority_queue<t3i, vector<t3i>, cmp> 

using namespace std;

class cmp {
  public:
    bool operator()(t3i a, t3i b) {
      if (get<0>(a) < get<0>(b)) {
        return false;
      }

      return true;
    }
};

void print_triple(t3i a) {
  cout << "(" << get<0>(a) << ", " << get<1>(a) << ", " << get<2>(a) << ")";
}

void print_queue(pqmin a) {
  cout << "[ ";

  while(!a.empty()) {
    print_triple(a.top());
    a.pop();

    if (a.empty()) {
      cout << " ]";
    } else {
      cout << " <- ";
    }
  }

  cout << "\n";
}

int get_i(t4i customer) {
  return get<0>(customer);
}
int get_t(t4i customer) {
  return get<1>(customer);
}
int get_p(t4i customer) {
  return get<2>(customer);
}
int get_r(t4i customer) {
  return get<3>(customer);
}




int main() {
  int n;
  cin >> n;

  queue<t4i> customers_queue;
  queue<t4i> reconnection_queue;

  for (int i = 0; i < n; i++) {
    int t, p, r;
    customers_queue.push(make_tuple(i, t, p, r));
  }

  if (customers_queue.size() == 1) {
    cout << get_t(customers_queue.front());
    return 0;
  }

  // primeiro cliente é atendido no instante 0
  t4i current_customer = customers_queue.front();
  customers_queue.pop();

  int time = 0;
  while(true) {
    // o cliente atual acabou de ser atendido
    if (get_t(current_customer) == 0) {
      current_customer = customers_queue.front();
      customers_queue.pop();
    }

    int i = 0;
    while(i < customers_queue.size()) {
      t4i c = customers_queue.front();
      customers_queue.pop();
      
      // o tempo de algum cliente expirou
      if (get_p(c) == 0) {
        reconnection_queue.push(c);
      } else {
        customers_queue.push(c);
      } 
    }

    i = 0;
    while(i < customers_queue.size()) {

    }

    // o tempo de algum cliente da fila de reconexão passou
    if (true) {
      // põe eles na fila de novo
    }

    time++;
  }

  return 0;
}