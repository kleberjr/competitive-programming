#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Problem: https://cses.fi/problemset/task/1083

int main() {
  ll int count = 1;
  ll int maxCount = 1;

  string dna;
  cin >> dna;

  for (int i = 1; i < dna.length(); i++) {
    char currentLetter = dna[i];
    char previousLetter = dna[i-1];

    if (currentLetter == previousLetter) {
      count++;
    } else {
      count = 1;
    }

    if (count > maxCount) {
      maxCount = count;
    }
  }

  cout << maxCount;
}