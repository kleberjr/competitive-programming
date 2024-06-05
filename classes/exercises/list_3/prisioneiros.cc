#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t, c;
  cin >> n >> t >> c;

  int x;
  vector<int> prisoners;
  for (int i = 0; i < n; i++) {
    cin >> x;
    prisoners.push_back(x);
  }

  int possible_ways = 0;
  for (int i = 0; i <= (prisoners.size() - c); i++) {
    bool valid_chunk = true;

    for (int j = i; j < i+c; j++) {
      if (prisoners[j] > t) {
        valid_chunk = false;
        break;
      }
    }

    if (valid_chunk) {
      possible_ways++;
    }
  }

  cout << possible_ways;

  return 0;
}