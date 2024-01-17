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

    // デバッグ用
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

   // 出力
    if (dp[n][s]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}