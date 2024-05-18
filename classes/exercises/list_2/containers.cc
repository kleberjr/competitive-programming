#include <bits/stdc++.h>

using namespace std;

int main() {
  string containers;
  cin >> containers;

  if (containers.length() == 1) {
    cout << 1;
    return 0;
  }

  string containers_stacks;
  containers_stacks = containers[0];
  
  for (int i = 1; i < containers.length(); i++) {
    char letter = containers[i];

    bool success = false;
    for (int j = 0; j < containers_stacks.length(); j++) {    
      if ((int) letter <= (int) containers_stacks[j]) {
        containers_stacks[j] = letter;
        success = true;
        break;
      }
    }

    if (!success) {
      containers_stacks += letter;
    }
  }

  cout << containers_stacks.length();

  return 0;
}