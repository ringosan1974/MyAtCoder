#include <bits/stdc++.h>
using namespace std;

// iは売られた数字
bool is_ok(long long i, long long a, long long b, long long x) {
    int d = to_string(i).size();
    return (a*i + b*d) <= x;
}

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    long long ok = 0;
    long long ng = 1000000001;
    if ((a*1000000000 + b*10) < x) {
        cout << 1000000000 << endl;
        return 0;
    } else if (x < (a*1 + b*1)) {
        cout << 0 << endl;
        return 0;
    }
    while (ng - ok > 1) {
        long long mid = (ok + ng) / 2;
        if (is_ok(mid, a, b, x)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    cout << ok << endl;
    return 0;
}