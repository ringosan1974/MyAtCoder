#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> r(n-1);
    rep(i, n-1) {
        if (i == 0) r[i] = 0;
        else r[i] = r[i-1];
        while (r[i] < n-1 && a[r[i]+1] - a[i] <= k) {
            ++r[i];
        }
    }
    ll ans = 0;
    rep(i, n-1) ans += r[i] - i;
    cout << ans << endl;
    return 0;
}