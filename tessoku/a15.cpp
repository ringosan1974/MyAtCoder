#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> x = a;
    sort(all(x));
    x.erase(unique(all(x)), x.end());
    int ans;
    rep(i, n) {
        ans = lower_bound(all(x), a[i]) - x.begin() + 1;
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}