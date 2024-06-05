#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  int n, k1, k2;
  cin >> n >> k1 >> k2;

  lli x;

  vector<int> a;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  } 

  vector<int> b;
  for (int i = 0; i < n; i++) {
    cin >> x;
    b.push_back(x);
  } 

  priority_queue<int> diff;
  for (int i = 0; i < n; i++) {
    diff.push(abs(a[i] - b[i]));
  }

  int operations_left = k1 + k2;
  
  while(operations_left) {
    x = diff.top();
    x--; operations_left--;
    diff.pop();
    diff.push(x);
  }

  lli error = 0;
  while(!diff.empty()) {
    x = diff.top();
    diff.pop();   
    error += x*x;
  }

  cout << error;

  return 0;
}