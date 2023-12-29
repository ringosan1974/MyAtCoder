#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, q;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    cin >> q;
    vector<ll> x(q);
    rep(i, q) cin >> x[i];

    sort(all(a));
    rep(i, q) {
        auto iter = lower_bound(all(a), x[i]);
        cout << iter - a.begin() << endl;
    }
    return 0;
}