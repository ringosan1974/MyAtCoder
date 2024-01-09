#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    a[0] = 0;
    b[0] = 0;
    b[1] = 0;
    rep(i, n-1) cin >> a[i+1];
    rep(i, n-2) cin >> b[i+2];
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }
    cout << dp[n-1] << endl;
    return 0;
}