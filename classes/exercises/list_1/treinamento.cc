#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  lli n;
  cin >> n;

  lli l[n];
  for (lli i = 0; i < n; i++) {
    cin >> l[i];
  }

  sort(l, l + n);

  lli count = 0;
  lli questions_needed = 1;
  for (lli i = 0; i < n; i++) {
    if (l[i] >= questions_needed) {
      questions_needed++;
      count++;
    }
  }

  cout << count;

  return 0;
}
