#include <bits/stdc++.h>
using namespace std;

// WAになった。
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> sa(m);
    vector<string> s(n);
    for (int i = 0; i < m; ++i) cin >> a.at(i);
    for (int i = 0; i < n; ++i) cin >> s.at(i);
    copy(a.begin(), a.end(), sa.begin());
    sort(sa.rbegin(), sa.rend());
    vector<int> p(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c = s.at(i).at(j);
            if (c == 'o') {
                p.at(i) += a.at(j);
            }
        }
        p.at(i) += i+1;
    }
    vector<bool> flag(n, true);
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        int ma = 0;
        int diff;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                ma = max(ma, p.at(j));
            }
        }
        diff = p.at(i) - ma;
        if (diff > 0) {
            ans.at(i) = 0;
        } else if (diff == 0) {
            ans.at(i) = 1;
        } else {
            int k = 0;
            for (auto v : sa) {
                diff += v;
                ++k;
                if (diff > 0) {
                    ans.at(i) = k;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) cout << ans.at(i) << endl;
    return 0;
}