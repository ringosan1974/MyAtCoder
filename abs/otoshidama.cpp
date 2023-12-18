#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long y;
    cin >> n >> y;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            long long k = n - (i + j);
            if (k >= 0) {
                if (y == k*1000LL + j*5000LL + i*10000LL) {
                    cout << i << " ";
                    cout << j << " ";
                    cout << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << " ";
    cout << -1 << " ";
    cout << -1 << endl;
    return 0;
}