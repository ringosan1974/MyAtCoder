#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

vector<int> ans;
void dfs(int now, int pre, vector<vector<int>> &connect, vector<bool> &flag) {
    ans.push_back(now);
    rep(i, (int)connect[now].size()) {
        if (!flag[connect[now][i]] && connect[now][i]!=pre) {
            flag[connect[now][i]] = true;
            dfs(connect[now][i], now, connect, flag);
            ans.push_back(now);
        }
    }
}

int main() {
    int n;
    ll sx, sy, tx, ty;
    cin >> n >> sx >> sy >> tx >> ty;
    vector<ll> x(n);
    vector<ll> y(n);
    vector<ll> r(n);

    rep(i, n) {
        cin >> x[i] >> y[i] >> r[i];
    }

    vector<vector<int>> connect(n);
    ll d;
    rep(i, n) {
        rep(j, n) {
            if (i > j) {
                d = (x[i] - x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
                if (abs(r[i]-r[j])*abs(r[i]-r[j]) <= d && d <= (r[i]+r[j])*(r[i]+r[j])) {
                    connect[i].push_back(j);
                    connect[j].push_back(i);
                }
            }
        }
    }

    int scir, tcir;
    rep(i, n) {
        if ((x[i] - sx)*(x[i]-sx) + (y[i]-sy)*(y[i]-sy) == r[i]*r[i]) {
            scir = i;
        }
        if ((x[i] - tx)*(x[i]-tx) + (y[i]-ty)*(y[i]-ty) == r[i]*r[i]) {
            tcir = i;
        }
    }

    vector<bool> flag(n);
    dfs(scir, -1, connect, flag);
    for (auto a : ans) {
        if (a == tcir) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}