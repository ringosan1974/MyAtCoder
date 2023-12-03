#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    int64_t bk = 0;
    int64_t bv = 0;
    map<int64_t, int64_t> m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        ++m[a];
    }
    for (auto &[key, value] : m) {
        if (bv < value) {
            bk = key;
            bv = value;
        }
    }
    cout << bk << " " << bv << endl;

    return 0;
}