#include <bits/stdc++.h>
using namespace std;


// 通った。。。
// やっぱり深夜にプログラミングはろくなことがない
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<string> s(n);
    for (int i = 0; i < m; ++i) cin >> a.at(i);
    for (int i = 0; i < n; ++i) cin >> s.at(i);

    //現在のプレイヤーの点数
    vector<int> p(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c = s.at(i).at(j);
            if (c == 'o') {
                p.at(i) += a.at(j);
            }
        }
        p.at(i) += i+1;
    }

    //それぞれのまだ解いていない問題について高い順に解いていく
    int ma = *max_element(p.begin(), p.end());
    for (int i = 0; i < n; ++i) {
        vector<int> sa(m);
        copy(a.begin(), a.end(), sa.begin());
        for (int j = 0; j < m; ++j) {
            if (s.at(i).at(j) == 'o') {
                sa.at(j) = 0;
            }
        }
        sort(sa.rbegin(), sa.rend());

        int ans = 0;
        while (p.at(i) < ma) {
            p.at(i) += sa.at(ans++);
        }
        cout << ans << endl;
    }
    return 0;
}