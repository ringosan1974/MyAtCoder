#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

bool is_OK(vector<ll> &v, ll n, ll x) {
    ll c = 0;
    rep(i, int(v.size())) {
        c += (n-1) / v[i];
    }
    return (c < x);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    ll ok = -1;
    ll ng = 1000000000;
    ll mid;
    while (abs(ok-ng) > 1) {
        mid = (ok + ng) / 2;
        if (is_OK(a, mid, k)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    cout << ok << endl;
    return 0;
}