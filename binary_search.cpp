#include <bits/stdc++.h>
using namespace std;

bool is_ok(int n);

int main() {
    int ok = -1;
    int ng = 10;
    vector<int> a(10);
    for (int i = 0; i < 10; ++i) {
        a.at(i) = i+1;
    }
    while ((ng - ok) > 1) {
        int border = (ng+ok)/2;
        if (is_ok(border)) {
            ok = border;
        } else {
            ng = border;
        }
    }
    cout << ok << endl;
    return 0;
}

bool is_ok(int n) {
    return n <= 5;
}