#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int64_t> l = {2, 1};

    cin >> n;
    for (int i = 2; i <= n; ++i) {
        l.push_back(l.at(i-2) + l.at(i-1));
    }

    cout << l.at(n) << endl;

    return 0;
}