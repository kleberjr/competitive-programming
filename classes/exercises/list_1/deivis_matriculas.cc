#include <bits/stdc++.h>
#define msi map<string, int>

using namespace std;

int main() {
  int n;
  cin >> n;

  string names[n], ordered_names[n];
  for (int i = 0; i < n; i++) {
    cin >> names[i];
    ordered_names[i] = names[i];
  }

  int l = sizeof(names) / sizeof(names[0]);
  sort(ordered_names, ordered_names + l);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (names[i] == ordered_names[j]) {
        cout << j << ' ';
      }
    }
  }

  return 0;
}