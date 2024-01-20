#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = 0;
    rep(i, (int)s.size()) {
        if (s[i] == 'A'+n) {
        } else {
            --i;
            ++n;
        }
        if (n > 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
} 
