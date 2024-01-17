#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    // 入力
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    // 二次元DP
    vector<vector<bool>> dp(n+1, vector<bool>(s+1));
    dp[0][0] = true;
    rep(j, s+1) dp[0][j+1] = false;
    rep(i, n) {
        rep(j, s+1) {
            if (dp[i][j]) {
                dp[i+1][j] = true;
                if (j+a[i] <= s) dp[i+1][j+a[i]] = true;
            }
        }
    }

    /*
    rep(i, n+1) {
        rep(j, s+1) {
            if (dp[i][j]) {
                cout << "o" << " ";
            } else {
                cout << "x" << " ";
            }
        }
        cout << endl;
    }
    */

    if (!dp[n][s]) {
        cout << -1 << endl;
        return 0;
    }

    int j = s;
    vector<int> ans;
    for (int i = n; 0 < i; --i) {
        if (!dp[i-1][j]) {
            ans.push_back(i);
            j -= a[i-1];
        }
    }

    reverse(all(ans));
    cout << ans.size() << endl;
    rep(i, (int)ans.size()) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}