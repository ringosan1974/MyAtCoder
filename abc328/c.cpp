#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    long long l[q];
    long long r[q];
    for (int i = 0; i < q; ++i) {
        cin >> l[i] >> r[i];
    }
    long long d[n];
    d[0] = 0;
    for (int i = 0; i < n-1; ++i) {
        if (s[i] == s[i+1]) {
            d[i+1] = d[i] + 1;
        } else {
            d[i+1] = d[i];
        }
    }
    for (int i = 0; i < q; ++i) {
        cout << d[r[i]-1] - d[l[i]-1] << endl;
    }
    return 0;
}