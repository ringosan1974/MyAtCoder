#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> q(n);
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i, n) cin >> q[i];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll ans = 0;
    ll y;
    for (ll x = 0; x < *max_element(all(q))+1; ++x) {
        y = LLONG_MAX;
        rep(i, n) {
            if (a[i]*x > q[i]) {
                // a[i]*xがq[i]を超えた時点で、x人分の料理を作れないことが確定する
                y = LLONG_MIN;
            } else if (b[i] > 0) {
                y = min(y, (q[i]-a[i]*x)/b[i]);
            }
        }
        ans = max(ans, x+y);
    }
    cout << ans << endl;
    return 0;
} 
