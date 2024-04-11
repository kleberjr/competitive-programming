#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long int n; 
    cin >> n;
    
    if (n % 2 == 1) {
        cout << n;
        return 0;
    }
    
    for (long long int i = n/2; i >= 1; i = i/2) {
        if (i % 2 == 1) {
            cout << i;
            return 0;
        }
    } 
    
    return 0;
}