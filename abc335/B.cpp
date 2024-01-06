#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    rep(i, n+1) {
        rep(j, n+1) {
            rep(k, n+1) {
                if (i+j+k <= n) {
                    cout << i << " ";
                    cout << j << " ";
                    cout << k << endl;
                }
            }
        }
    }
    return 0;
} 
