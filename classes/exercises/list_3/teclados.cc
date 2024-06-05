#include <bits/stdc++.h>

using namespace std;

int main() {
  string source_string, target_string;
  cin >> source_string >> target_string;
  
  map<char, char> letter_dict;
  char source_letter, target_letter;
  for (int i = 0; i < 26; i++) {
    source_letter = source_string[i];
    target_letter = target_string[i];

    letter_dict[source_letter] = target_letter;
    letter_dict[toupper(source_letter)] = toupper(target_letter);
  }

  int n;
  cin >> n;

  string word;
  while(n--) {
    cin >> word;

    char letter;
    for (int i = 0; i < word.size(); i++) {
      letter = word[i];
      
      if (!letter_dict[letter]) {
        cout << letter;
      } else {
        cout << letter_dict[letter];
      }
    }
    
    cout << "\n";
  }

  return 0;
}