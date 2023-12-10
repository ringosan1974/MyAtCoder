#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, k;
    long long int ans = 0;
    cin >> n >> s >> k;
    for (int i = 0; i < n; ++i) {
        int pi, qi;
        cin >> pi >> qi;
        ans += pi * qi;
    }
    if (ans < s) {
        ans += k;
    }
    cout << ans << endl;

    return 0;
}