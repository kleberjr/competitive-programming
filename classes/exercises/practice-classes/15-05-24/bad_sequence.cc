#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  if (s.size() == 0) {
    cout << "No";
    return 0;
  }

  stack<char> open_brackets;
  stack<char> closed_brackets;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      if (closed_brackets.empty()) {
        open_brackets.push(s[i]);
        continue;
      }
      
      closed_brackets.pop();
      continue;
    }

    if (!closed_brackets.empty()) {
      cout << "No";
      return 0;
    }

    if (!open_brackets.empty()) {
      open_brackets.pop();
      continue;
    }

    closed_brackets.push(s[i]);
  }

  if (open_brackets.empty() && closed_brackets.empty()) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}