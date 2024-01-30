#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<int> v(26, 0);
    rep(i, (int)s.size()) {
        v[s[i]-'a']++;
    }
    int ma = 0;
    for (int i = 25; i >= 0; --i) {
        ma = max(ma, v[i]);
    }
    rep(i, (int)v.size()) {
        if (v[i] == ma) {
            printf("%c\n", (char)(i+'a'));
            return 0;
        }
    }
    return 0;
} 
