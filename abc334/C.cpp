#include <bits/stdc++.h>
using namespace std;

// またこんど
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()

int main() {
    long long n, k;
    vector<pair<int, int>> s(n);
    rep(i, n) s[i] = {i, 2};
    vector<long long> a(k);
    vector<pair<int, bool>> nokori;
    rep(i, k) {
        cin >> a[i];
    }
    rep(i, k) {
        nokori.push_back({[a[i]-1], true});
    }

    return 0;
} 
