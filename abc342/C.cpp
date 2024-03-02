#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll r = 1;
    ll ans;
    string s;
    ll size;
    bool flag;
    for (ll i = 1; ; ++i) {
        flag = true;
        r = i*i*i;
        if (r > n) {
            break;
        }
        s = to_string(r);
        size = s.size();
        rep(j, size) {
            if (s[j] != s[size-j-1]) {
                flag = false;
            }
        }
        if (flag) {
            ans = r;
        }
    }
    cout << ans << endl;
    return 0;
} 
