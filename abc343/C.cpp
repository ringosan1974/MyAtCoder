#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n, m, l, q;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    cin >> m;
    vector<ll> b(m);
    rep(i, m) {
        cin >> b[i];
    }
    cin >> l;
    vector<ll> c(l);
    rep(i, l) {
        cin >> c[i];
    }
    cin >> q;
    vector<ll> x(q);
    rep(i, q) {
        cin >> x[i];
    }
    
    set<int> st;
    rep(i, n) {
        rep(j, m) {
            rep(k, l) {
                st.insert(a[i]+b[j]+c[k]);
            }
        }
    }
    rep(i, q) {
        if (st.count(x[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
} 
