#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int ans = 0;
    set<string> T;
    rep(i, n) {
        if (T.count(s[i]) == 0) {
            ++ans;
        }
        T.insert(s[i]);
        reverse(all(s[i]));
        T.insert(s[i]);
    }
    cout << ans << endl;
    return 0;
}