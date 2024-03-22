#include <bits/stdc++.h>
#define ll long long;

using namespace std;

// Problem: https://cses.fi/problemset/task/1083

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);    
  
  ll int n;
  cin >> n;

  int numbers[n-1];
  ll int sum = 0;

  ll int x;
  for (int i = 0; i < n-1; i++){
    cin >> x;
    sum = sum + x; 
  }

  ll int total = (n*n + n) / 2;
  cout << total - sum;

  return 0;
}

