#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, k;
    int c = 0;
    cin >> n >> k;
    for (int i = 1; i < n+1; ++i) {
        for (int ii = 1; ii < n+1; ++ii) {
            int three = k-(i+ii);
            if (0 < three && three <= n) {
                ++c;
            }
        }
    }
    cout << c << endl;
    return 0;
}