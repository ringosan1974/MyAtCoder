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
    ll n1 = n / 2;
    ll n2 = n - n1;
    vector<ll> sum1(1<<n1);
    rep(i, 1<<n1) {
        rep(j, n1) {
            if ((i>>j) % 2 == 1) sum1[i] += a[j];
        }
    }
    vector<ll> sum2(1<<n2);
    rep(i, 1<<n2) {
        rep(j, n2) {
            if ((i>>j) % 2 == 1) sum2[i] += a[j+n1];
        }
    }
    sort(all(sum2));
    rep(i, 1<<n1) {
        if (binary_search(all(sum2), k-sum1[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}