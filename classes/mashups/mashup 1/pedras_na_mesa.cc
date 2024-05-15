#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int count = 0;
  char previous = 'X';
  for (int i = 0; i < n; i++) {
    if (s[i] == previous) {
      count++;
    }

    previous = s[i];
  }
  
  cout << count;

  return 0;
}