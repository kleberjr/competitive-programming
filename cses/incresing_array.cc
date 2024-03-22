#include <bits/stdc++.h>
using namespace std;

// Problem: https://cses.fi/problemset/task/1094

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  
  long long int n;
  cin >> n;

  long long int previous_number, current_number, diff, moves;
  previous_number = current_number = diff = moves = 0;

  for (int i = 1; i < n + 1; i++) {
    cin >> current_number;
  
    if (previous_number != 0) {
      diff = current_number - previous_number;

      if (diff < 0) {
        moves = moves + abs(diff);
        current_number = current_number + abs(diff);
      }
    }

    previous_number = current_number;
  }

  cout << moves;

  return 0;
}

