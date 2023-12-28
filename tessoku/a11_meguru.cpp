#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

bool isOK(vector<int> &v, int index, int key) {
    if (index < 0) return true;
    if (index >= int(v.size())) return false;
    return v[index] <= key;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ok = -1;
    int ng = n;
    int mid;
    while (abs(ok - ng) > 1) {
        mid = (ok + ng) / 2;
        if (isOK(a, mid, x)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    cout << ok+1 << endl;
    return 0;
}