#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a.at(i);
    }
    int ans = 0;
    while(true) {
        for (int j = 0; j < n; ++j) {
            if (a.at(j) % 2 == 0) {
                a.at(j) = a.at(j) / 2;
            } else {
                cout << ans << endl;
                return 0;
            }
        }
        ++ans;
    }
    return 0;
}