#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> c(1000000, 0);
    long long tot = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a.at(i);
        tot += a.at(i);
        ++c.at(a.at(i)-1);
    }
    long long mxelm = *max_element(a.begin(), a.end());
    long long d[mxelm+1];
    d[0] = tot;
    for (int i = 0; i < mxelm; ++i) {
        d[i+1] = d[i] - (i+1) * c.at(i);
    }
    for (long long ai : a) {
        cout << d[ai] << " ";
    }
    cout << endl;

    return 0;
}