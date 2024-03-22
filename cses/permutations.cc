#include <bits/stdc++.h>
using namespace std;

// Problem: https://cses.fi/problemset/task/1070

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  
  long long int n;
  cin >> n;

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return 0;
  }

  for (int i = n; i >= 1; i--) {
    if (i % 2 == 1) {
      cout << i << " ";
    }
  }

  for (int i = n; i >= 1; i--) {
    if (i % 2 == 0) {
      cout << i << " ";
    }
  }

  return 0;
}

