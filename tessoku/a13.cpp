#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    rep(i, n) cin >> a[i+1];

    vector<ll> r(n);
    for (ll i = 1; i < n; ++i) {
        if (i == 1) r[i] = 1;
        else r[i] = r[i-1];

        while (r[i] < n && a[r[i]+1] - a[i] <= k) {
            ++r[i];
        }
    }
    ll ans = 0;
    for (ll i = 1; i < n; ++i) ans += r[i] - i;
    cout << ans << endl;
    return 0;
}