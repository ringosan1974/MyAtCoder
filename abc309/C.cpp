#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> ab(n);
    rep(i, n) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.rbegin(), ab.rend());

    // bの値を累積和
    vector<ll> s(n+1);
    s[0] = 0;
    rep(i, n) {
        s[i+1] = s[i] + ab[i].second;
    }
    if (s[n] <= k) {
        cout << 1 << endl;
    } else {
        int ind = upper_bound(all(s), k) - s.begin();
        int ans = ab[ind-1].first + 1;
        cout << ans << endl;
    }

    return 0;
}