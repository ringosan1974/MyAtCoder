#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> r(n);
    rep(i, n) cin >> r[i];
    vector<ll> x(q);
    rep(i, q) cin >> x[i];
    vector<ll> sr = r;
    sort(sr.begin(), sr.end());
    vector<ll> d(n+1); //i台のそりを引くために必要なトナカイの合計
    d[0] = 0;
    rep(i, n) {
        d[i+1] = d[i] + sr[i];
    }
    ll ans;
    rep(i, q) {
        auto iter = upper_bound(d.begin(), d.end(), x[i]);
        ans = distance(d.begin(), iter) - 1;
        cout << ans << endl;
    }
    return 0;
}