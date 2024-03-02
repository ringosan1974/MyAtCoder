#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> a(t);
    vector<ll> b(t);
    vector<ll> s(n, 0);
    map<ll, ll> m;
    ll hoge;
    rep(i, t) {
        cin >> a[i] >> b[i];
    }
    m[0] = n;
    rep(i, t) {
        hoge = s[a[i]-1];
        s[a[i]-1] += b[i];
        m[hoge + b[i]] += 1;
        m[hoge] -= 1;
        if (m.at(hoge) <= 0) {
            m.erase(hoge);
        }
        cout << m.size() << endl;
    }
    return 0;
} 
