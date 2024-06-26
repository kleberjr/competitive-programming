#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> even_numbers;
  set<int> unique_even_numbers;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    if (a % 2 == 0 && !unique_even_numbers.count(a)) {
      // cout << "inserting number: " << a << "\n";
      even_numbers.push_back(a);
      unique_even_numbers.insert(a);
    }
  }

  sort(even_numbers.begin(), even_numbers.end());

  int movements = 0;
  for (int i = even_numbers.size()-1; i >= 0; i--) {    
    int number = even_numbers[i];

    while(number % 2 == 0) {
      number = number / 2;
      movements++;

      if (unique_even_numbers.count(number)) {
        break;
      }
    }
  }

  cout << movements << "\n";
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    solve();
  } 

  return 0;
}