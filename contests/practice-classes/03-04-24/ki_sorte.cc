#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int calculate_number(int a, int b, int c, int x) {
  return abs(x - a) + abs((x - b)*(x - b)) + abs((x - c)*(x - c)*(x - c));
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int current_number;
  int smallest_idx = 1;
  int smallest_number = calculate_number(a, b, c, 1);
  for (int i = 2; i <= 99; i++) {
    current_number = calculate_number(a, b, c, i);
    
    if (current_number < smallest_number) {
      smallest_idx = i;
      smallest_number = current_number;
    }
  }

  cout << smallest_idx;

  return 0;
}