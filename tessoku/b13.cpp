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

    //累積和
    vector<ll> d(n+1);
    d[0] = 0;
    rep(i, n) {
        d[i+1] = d[i] + a[i];
    }

    //尺取り法
    // rの要素数をちゃんと考える必要がある 基本的に（調べるvectorの要素数-1）？
    vector<int> r(n); 
    rep(i, n) {
        if (i == 0) r[i] = 0;
        else r[i] = r[i-1];

        while (r[i] < n && d[r[i]+1] - d[i] <= k) {
            ++r[i];
        }
    }

    ll ans = 0;
    rep(i, n) {
        ans += r[i] - i;
    }
    cout << ans << endl;

    return 0;
}