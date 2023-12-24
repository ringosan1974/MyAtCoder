#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string n;
    cin >> n;
    int ans = 0;
    rep(i, n.size()) {
        int keta;
        int kurai = (1 << (n.size() - 1 - i));
        if (n[i] == '0') keta = 0;
        if (n[i] == '1') keta = 1;
        ans += keta*kurai;
    }
    cout << ans << endl;
    return 0;
}