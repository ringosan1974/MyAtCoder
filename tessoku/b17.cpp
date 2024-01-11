#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    //動的計画法
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i-2] + abs(h[i-2] - h[i]));
    }

    int place = n-1;
    vector<int> ans;
    while (true) {
        ans.push_back(place+1);
        if (place == 0) {
            break;
        }
        if (dp[place] == dp[place-1] + abs(h[place-1] - h[place])) {
            place -= 1;
        } else {
            place -= 2;
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