#include <bits/stdc++.h>

using namespace std;

bool check(int x, set<int> s) {
  set<int> copy = s;

  int c = 1;
  while(true) {
    if (c + x == 13 && copy.size() == 1) {
      return true;
    }

    copy.erase(x);
    copy.
  }
}

int main() {
  int n;
  cin >> n;

  if (n == 13) {
    cout << 1;
    return 0;
  } 

  set<int> r;
  for (int i = 2; i <= n; i++) {
    r.insert(i);
  }

  int i = 6;
  bool loop = true;
  while(loop) {
    if (check(i, r)) {
      cout << i;
      return 0;
    }

    i++;
  }  

  return 0;
}