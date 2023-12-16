#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1, s2;
    char t1, t2;
    cin >> s1 >> s2;
    cin >> t1 >> t2;
    int s = abs(s1 - s2);
    int t = abs(t1 - t2);
    if (s == 3) {
        s = 2;
    }
    if (t == 3) {
        t = 2;
    }
    if (s == 4) {
        s = 1;
    }
    if (t == 4) {
        t = 1;
    }
    if (s == t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}