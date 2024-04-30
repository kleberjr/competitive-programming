#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, g;
  cin >> l >> g;

  cout << (l*100)/(l+g) << " " << (g*100)/(l+g);
}