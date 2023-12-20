#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> d(n, 0);
    for (long long i = 0; i < n; ++i) {
        cin >> a.at(i);
    }
    vector<long long> s = a;
    sort(s.begin(), s.end());
    d.at(0) = s.at(0);
    for (long long i = 1; i < n; ++i) {
        d.at(i) = d.at(i-1) + s.at(i);
    }
    long long tot = d.at(n-1);
    long long line;
    for (long long i = 0; i < n; ++i) {
        line = a.at(i);
        auto iter = upper_bound(s.begin(), s.end(), line);
        size_t index = distance(s.begin(), iter-1);
        cout << tot - d.at(index) << endl;
    }
    cout << endl;
    return 0;
}