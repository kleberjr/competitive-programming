#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n, m;
  cin >> n >> m;


  if (n % 2 == 1 && m % 2 == 1) {
    cout << (n*m)/2 + 1;
  } else {
    cout << (n*m)/2;
  }

  return 0;
}