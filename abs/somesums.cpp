#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int v = 0;
    for (int i = 1; i <= n; ++i) {
        int s = 0;
        for (char c : to_string(i)) {
            s += c-'0';
        }
        if (a <= s && s <= b) {
            v += i;
        }
    }
    cout << v << endl;
    return 0;
}