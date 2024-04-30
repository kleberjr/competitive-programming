#include <bits/stdc++.h>
 
using namespace std;
 
int get_idx(char c) {
  return (int) c - 65;    
}
 
int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    bool solved[26];
    for (int j = 0; j < 26; j++) {
        solved[j] = false;
    }
    
    int b = 0;
    for (int j = 0; j < n; j++) {
        if (solved[get_idx(s[j])] == true) {
            b++;
        } else {
            solved[get_idx(s[j])] = 1;
            b += 2;
        }
    }
    
    cout << b << "\n";
  }
  
  return 0;
}