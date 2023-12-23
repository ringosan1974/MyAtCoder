#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()

int main() {
    int b, g;
    cin >> b >> g;
    if (b > g) {
        cout << "Bat" << endl;
    } else {
        cout << "Glove" << endl;
    }
    return 0;
} 
