#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int d, n, l, r;
    cin >> d >> n;
    vector<int> ds(d, 0);
    rep(i, n) {
        cin >> l >> r;
        ++ds[l-1]; --ds[r];
    }
    vector<int> c(d+1);
    c[0] = 0;
    rep(i, d) {
        c[i+1] = c[i] + ds[i];
    }
    rep(i, d) {
        cout << c[i+1] << endl;
    }
    return 0;
}