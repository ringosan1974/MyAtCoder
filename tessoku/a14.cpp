#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    vector<ll> d(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    rep(i, n) cin >> d[i];
    vector<ll> p(n*n);
    int x = 0;
    rep(i, n) {
        rep(j, n) {
            p[x] = a[i] + b[j];
            ++x;
        }
    }
    vector<ll> q(n*n);
    x = 0;
    rep(i, n) {
        rep(j, n) {
            q[x] = c[i] + d[j];
            ++x;
        }
    }
    //二分探索
    sort(all(q));
    for (int i = 0; i < n*n; ++i) {
        if (binary_search(all(q), k-p[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}