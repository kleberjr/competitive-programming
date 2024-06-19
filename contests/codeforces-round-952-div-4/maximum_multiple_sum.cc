#include <bits/stdc++.h>

using namespace std;

int main() {
  // int t;
  // cin >> t;

  int n, a;
  cin >> n;

  int sum = 0;
  int max_value = 0;
  int ans = 0;
  while(n--) {
    cin >> a;

    cout << "a: " << a;

    max_value = max(a, max_value);
    cout << " (valor máximo: " << max_value << " | soma: " << sum << ")\n";

    if (max_value == sum) {
      ans++;
    }

    sum += a;
  }

  cout << ans << "\n";

  return 0;
}