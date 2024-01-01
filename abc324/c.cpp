#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    string t;
    cin >> n >> t;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<int> ans;
    rep(i, n) {
        if (abs((int)s[i].size() - (int)t.size()) >= 2) continue;
        int a = 0, b = 0;
        int minsize = min((int)s[i].size(), (int)t.size());
        for (a = 0; a < minsize; ++a) {
            if (s[i][a] != t[a]) break;
        }
        for (b = 0; b < minsize; ++b) {
            if (s[i][(int)s[i].size() - b - 1] != t[(int)t.size() - b - 1]) break;
        }

        if (a + b >= minsize) ans.push_back(i+1);
        else if (a + b + 1 == (int)s[i].size() && (int)s[i].size() == (int)t.size()) ans.push_back(i+1);
    }
    cout << ans.size() << endl;
    rep(i, (int)ans.size()) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}