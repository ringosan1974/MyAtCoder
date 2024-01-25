#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> a(n);
    rep (i, n) cin >> p[i] >> a[i];

    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][n-1] = 0;
    int r, score1, score2;
    for (int len = n-2; len >= 0; --len) {
        for (int l = 0; l <= (n-1) - len; ++l) {
            r = l + len;
            score1 = 0;
            if (0 < l && l<=p[l-1]-1 && p[l-1]-1<=r) score1 = a[l-1];
            score2 = 0;
            if (r+1 <= n-1 && l<=p[r+1]-1 && p[r+1]-1<=r) score2 = a[r+1];

            if (l == 0) {
                dp[l][r] = dp[l][r+1] + score2;
            } else if (r == n-1) {
                dp[l][r] = dp[l-1][r] + score1;
            } else {
                dp[l][r] = max(dp[l-1][r] + score1, dp[l][r+1] + score2);
            }
        }
    }
    int ans = 0;
    rep(i, n) {
        ans = max(ans, dp[i][i]);
    }
    cout << ans << endl;
    return 0;
}