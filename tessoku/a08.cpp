#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int h, w, q;
    cin >> h >> w;
    vector<vector<int>> x(h, vector<int>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> x[i][j];
        }
    }
    cin >> q;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);
    rep(i, q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    // 二次元累積和
    vector<vector<int>> y(h+1, vector<int>(w+1, 0));
    vector<vector<int>> z(h+1, vector<int>(w+1, 0));
    rep(i, h) {
        rep(j, w) {
            y[i+1][j+1] = y[i+1][j] + x[i][j];
        }
    }
    rep(i, w) {
        rep(j, h) {
            z[j+1][i+1] = z[j][i+1] + y[j+1][i+1];
        }
    }
    rep(i, q) {
        cout << z[c[i]][d[i]] - z[c[i]][b[i]-1] - z[a[i]-1][d[i]] + z[a[i]-1][b[i]-1] << endl;
    }
    return 0;
}