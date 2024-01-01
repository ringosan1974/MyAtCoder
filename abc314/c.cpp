#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> c(n);
    rep(i, n) cin >> c[i];

    vector<deque<char>> pc(m);
    rep(i, n) {
        pc[c[i]-1].push_back(s[i]);
    }
    rep(i, m) {
        char tmp = pc[i].back();
        pc[i].pop_back();
        pc[i].push_front(tmp);
    }
    string ans;
    rep(i, n) {
        ans += pc[c[i]-1].front();
        pc[c[i]-1].pop_front();
    }
    cout << ans << endl;
    return 0;
}