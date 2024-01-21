#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp((int)s.size()+1, vector<int>((int)t.size()+1));
    rep(i, ((int)s.size())) {
        rep(j, ((int)t.size())) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = max({ dp[i][j+1], dp[i+1][j], dp[i][j]+1 });
            } else {
                dp[i+1][j+1] = max({ dp[i][j+1], dp[i+1][j] });
            }
        }
    }

    cout << dp[(int)s.size()][(int)t.size()] << endl;
    return 0;
}