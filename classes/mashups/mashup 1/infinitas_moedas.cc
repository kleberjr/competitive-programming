#include <bits/stdc++.h>
#define lli long long int

using namespace std;
 
int main() {
    lli n, s;
    cin >> n >> s;
    
    if (n == 1) {
        cout << s;
        return 0;
    }
    
    lli qtd = 0;
    if (s <= n) {
        cout << 1;
    } else {
        lli tmp = s / n;
        s -= tmp * n;

        if (s == 0) {
            cout << tmp;
            return 0;
        }
        
        cout << tmp + 1;
    }
    
    return 0;
}