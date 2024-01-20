#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    int goukei1 = 0;
    int goukei2 = 0;

    for (int i = 0; i < n; ++i) {
        goukei1 += x[i];
        goukei2 += y[i];
    }

    if (goukei1 == goukei2) {
        cout << "Draw" << endl;
    } else if (goukei1 > goukei2) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
    return 0;
} 
