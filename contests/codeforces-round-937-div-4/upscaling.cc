#include <bits/stdc++.h>
#define lli long long int

using namespace std;

void upsolving() {
  lli n; cin >> n;

  for (int x = 0; x < 2*n; x++) {
    for (int y = 0; y < 2*n; y++) {
      if ((x/2 + y/2) % 2 == 0) {
        cout << "#";
      } else {
        cout << ".";
      }
    }

    cout << endl;
  }
}

void first_solution() {
  lli n;
  cin >> n;

  if (n == 1) {
    cout << "##" << endl;
    cout << "##" << endl;
    return;
  }

  string previousChar;
  string line;
  for (lli x = 1; x < n + 1; x++) {
    
    if (x % 2 == 0) {
      previousChar = "#";
    } else {
      previousChar = ".";
    }
    
    for (lli j = 1; j < n + 1; j++) {
      if (previousChar == ".") {
        line = line + "##";
        previousChar = "#";
      } else {
        line = line + "..";
        previousChar = ".";
      }

      if (line.length() == 2*n) {
        cout << line << endl;
        cout << line << endl;
        line = "";
      }
    }
  }
}

int main() {
  lli t;
  cin >> t;

  for (lli i = 0; i < t; i++) {
    // first_solution();
    upsolving();
  }

  return 0;
}