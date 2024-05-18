#include <bits/stdc++.h>

using namespace std;

int get_greatest(stack<int> saco) {
  int greatest = 0;
  
  for (int i = 0; i < saco.size(); i++) {
    int p = saco.top();
    greatest = max(p, greatest); 
    saco.pop();
  }

  return greatest;
}

int main() {
  int n;
  cin >> n;

  stack<int> saco;
  char c;
  int x;
  int greatest = 0;
  for (int i = 0; i < n; i++) {
    cin >> c;
    cin >> x;

    if (c == 'A') {
      saco.push(x);
      greatest = max(x, greatest);
    }

    if (c == 'V') {
      cout << greatest << "\n";
    }

    if (c == 'R') {
      saco.pop();
      greatest = get_greatest(saco);
    }
  }
  
  return 0;
}