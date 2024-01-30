#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s;
    cin >> s;
    bool flag = false;
    if (65 <= s[0] && s[0] <= 90) {

    } else {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 1; i < (int)s.size(); ++i) {
        if (97 <= s[i] && s[i] <= 122) {

        } else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
} 
