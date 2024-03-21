#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int count = 1;
  long long int maxCount = 1;

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