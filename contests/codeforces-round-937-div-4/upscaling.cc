#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  lli t;
  cin >> t;

  lli n;
  for (lli i = 0; i < t; i++) {
    cin >> n;

    if (n == 1) {
      cout << "##" << endl;
      cout << "##" << endl;
      continue;;
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

  return 0;
}