#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()

int main() {
    long long a, m, l, r;
    cin >> a >> m >> l >> r;
    long long ll = abs(l - a);
    long long rl = abs(r - a);
    long long ln = ll / m;
    long long rn = rl / m;
    long long ans;
    if (r-a < 0) {
        if ((r-a) % m == 0) {
            ans = ln - rn + 1;
        } else {
            ans = ln - rn;
        }
    } else if (l-a < 0 && 0 < r-a) {
        ans = ln + rn + 1;
    } else if (r-a == 0) {
        ans = ln + 1;
    } else if (l-a == 0) {
        ans = rn + 1;
    } else if (0 < l-a) {
        if ((l-a) % m == 0) {
            ans = rn - ln + 1;
        } else {
            ans = rn - ln;
        }
    }
    cout << ans << endl;
    return 0;
} 
