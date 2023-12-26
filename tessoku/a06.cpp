#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> d(n+1); //累積和
    d[0] = 0;
    rep(i, n) {
        d[i+1] = d[i] + a[i];
    }

    int l, r;
    vector<ll> ans(q);
    rep(i, q) {
        cin >> l >> r;
        ans[i] = d[r] - d[l-1];
    }
    
    rep(i, q) {
        cout << ans[i] << endl;
    }
    return 0;
}