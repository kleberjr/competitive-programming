#include <bits/stdc++.h>
#define lli long long int

using namespace std;

void upsolving() {
  int h, m;
  char c;

  // Like this it's possible to read an input as 00:00 and separate it in different variables
  cin >> h >> c >> m;

  // there is no great solution here, mine is fine
}

void first_solution() {
  string timestamp;
  int hours, minutes;
  cin >> timestamp;

  hours = stoi(timestamp);
  
  if (hours == 0) {
    cout << 12 << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
    return;
  }

  if (hours == 12) {
    cout << 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
    return;
  }

  if (hours > 12) {
    if (hours % 12 < 10) {
      cout << "0" << hours % 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
      return;
    }

    cout << hours % 12 << ":" << timestamp[3] << timestamp[4] << " PM" << endl;
  } 

  if (hours < 12) {
    if (hours < 10) {
      cout << "0" << hours % 12 << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
      return;
    }

    cout << hours << ":" << timestamp[3] << timestamp[4] << " AM" << endl;
  }
}

int main() {
  lli t; cin >> t;

  while(t--) {
    upsolving();
  }

  return 0;
}