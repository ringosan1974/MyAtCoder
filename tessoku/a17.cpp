#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    a[0] = 0;
    vector<int> b(n);
    b[0] = 0;
    b[1] = 0;
    for (int i = 1; i < n; ++i) cin >> a[i];
    for (int i = 2; i < n; ++i) cin >> b[i];
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);
    }
    int place = n-1;
    vector<int> ans;
    while (true) {
        ans.push_back(place+1);
        if (place == 0) {
            break;
        }
        if (dp[place] == dp[place-1] + a[place]) {
            place -= 1;
        } else {
            place -= 2;
        }
    }
    reverse(all(ans));
    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans[i] << " ";
    cout << endl;
    return 0;
}