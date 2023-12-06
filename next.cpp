#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a.at(i);
    }
    int max;
    sort(a.rbegin(), a.rend());
    max = a.at(0);
    for (auto ai : a) {
        if (ai != max) {
            cout << ai << endl;
            break;
        }
    }
    return 0;
}