#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> st(n);
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n-1) {
        cin >> st[i].first >> st[i].second;
    }
    rep(i, n-1) {
        if (a[i] >= st[i].first) {
            ll hoge = a[i] / st[i].first;
            a[i] -= hoge*st[i].first;
            a[i+1] += hoge*st[i].second;
        }
    }
    cout << a[n-1] << endl;
    return 0;
}