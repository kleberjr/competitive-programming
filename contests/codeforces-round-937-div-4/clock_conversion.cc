#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
  lli t;
  cin >> t;

  string timestamp;
  int hours, minutes;

  char *s;
  for (lli i = 0; i < t; i++) {
    cin >> timestamp;

    hours = stoi(timestamp);
    
    if (hours == 0) {
      cout << 12 << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
      continue;
    }

    if (hours == 12) {
      cout << 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
      continue;
    }

    if (hours > 12) {
      if (hours % 12 < 10) {
        cout << "0" << hours % 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
        continue;
      }

      cout << hours % 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
    } 

    if (hours < 12) {
      if (hours < 10) {
        cout << "0" << hours % 12 << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
        continue;
      }

      cout << hours << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
    }
  }

  return 0;
}