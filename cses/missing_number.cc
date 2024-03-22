#include <bits/stdc++.h>
using namespace std;

// Problem: https://cses.fi/problemset/task/1083

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  
  long long int n;
  cin >> n;

  long long int numbers[n-1];
  long long int sum = 0;

  long long int x;
  for (int i = 0; i < n-1; i++){
    cin >> x;
    sum = sum + x; 
  }

  long long int total = (n*n + n) / 2;
  cout << total - sum;

  return 0;
}

