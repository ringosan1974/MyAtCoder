#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;

    vector<vector<int>> LP((int)s.size()+1, vector<int>((int)t.size()+1));
    LP[0][0] = 0;
    rep(i, (int)s.size()) LP[i+1][0] = i+1;
    rep(i, (int)t.size()) LP[0][i+1] = i+1;

    rep(i, (int)s.size()) {
        rep(j, (int)t.size()) {
            if (s[i] == t[j]) {
                LP[i+1][j+1] = min({ LP[i][j+1]+1, LP[i+1][j]+1, LP[i][j] });
            } else {
                LP[i+1][j+1] = min({ LP[i][j+1]+1, LP[i+1][j]+1, LP[i][j]+1 });
            }
        }
    }

    cout << LP[(int)s.size()][(int)t.size()] << endl;
    return 0;
}