#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    int h, w, n;
    string t;
    cin >> h >> w >> n >> t;
    vector<string> f(h);
    string s;
    rep(i, h) {
        cin >> s;
        f.push_back(s);
    }
    bool flag;
    int ans = 0;
    rep(i, h) {
        rep(j, w) {
            pair<int, int> cur = {i, j};
            flag = true;
            if (f[i][j] == '.') {
                for (char c : t) {
                    if (c == 'L') {
                        cur.first += d[0].first;
                        cur.second += d[0].second;
                    } else if (c == 'R') {
                        cur.first += d[1].first;
                        cur.second += d[1].second;
                    } else if (c == 'U') {
                        cur.first += d[2].first;
                        cur.second += d[2].second;
                    } else if (c == 'D') {
                        cur.first += d[3].first;
                        cur.second += d[3].second;
                    }
                    if (cur.first <= 0 || cur.first >= h-1 || cur.second <= 0 || cur.second >= w-1) {
                        flag = false;
                        break;
                    }
                    if (f[cur.first][cur.second] == '#') {
                        flag = false;
                        break;
                    }
                }
                if (flag == true) {
                    cout << cur.first << cur.second << endl;
                    ++ans;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}