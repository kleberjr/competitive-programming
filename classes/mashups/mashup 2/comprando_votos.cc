#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, s; 
  cin >> n;
  cin >> s;

  int a;
  priority_queue<int> candidates;

  for (int i = 1; i < n; i++) {
    cin >> a;
    candidates.push(a);
  }

  int x = 0;
  while(true) {
    a = candidates.top();
    
    if (s > a) {
      cout << x;
      break;
    }

    a--; x++; s++;
    candidates.pop();
    candidates.push(a);
  }

  return 0;
}