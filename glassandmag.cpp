#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, g, m;
    int glass = 0;
    int mag = 0;
    cin >> k >> g >> m;
    for (int i = 0; i < k; ++i) {
        if (glass == g) {
            glass = 0;
        } else if (mag == 0) {
            mag = m;
        } else {
            if (g-glass >= mag) {
                glass += mag;
                mag = 0;
            } else {
                mag -= g-glass;
                glass = g;
            }
        }
    }
    cout << glass << " " << mag << endl;
    return 0;
}