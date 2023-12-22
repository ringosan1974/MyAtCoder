#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }
    int dx[8] = {-1, -1, -1,  0,  0,  1, 1, 1};
    int dy[8] = {-1,  0,  1, -1,  1, -1, 0, 1};

    vector<vector<bool>> used(h, vector<bool>(w));
    int nx, ny;
    int ans = 0;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '.' or used[i][j]) continue;
            queue<pair<int, int>> q;
            q.push({i, j});
            while (!q.empty()) {
                pair<int, int> qu = q.front(); q.pop();
                int x = qu.first;
                int y = qu.second;
                rep(k, 8) {
                    nx = x + dx[k];
                    ny = y + dy[k];
                    if ((0 <= nx && nx < h) && (0 <= ny && ny < w) && (s[nx][ny] == '#') && !used[nx][ny]) {
                        used[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}