#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

double f(double x) {
    return x*x*x + x;
}

int main() {
    ll n;
    cin >> n;
    double ok = -1;
    double ng = 100;
    double mid;
    while (abs(ok - ng) > 0.001) {
        mid = (ok+ng) / 2.0;
        if (f(mid) <= 1.0*n) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    cout << ok << endl;
    return 0;
}