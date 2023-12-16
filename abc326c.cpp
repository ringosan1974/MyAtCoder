#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long int> a(n);
    for (int i = 0; i < n; ++i) cin >> a.at(i);
    sort(a.begin(), a.end());

    long long int mx = 0;
    for (int i = 0; i < n; ++i) {
        long long int l = a.at(i);
        long long int r = a.at(i) + m;
        auto iter1 = lower_bound(a.begin(), a.end(), l);
        auto iter2 = upper_bound(a.begin(), a.end(), r-1);
        long long int dist = iter2 - iter1;
        mx = max(mx, dist);
    }
    cout << mx << endl;
    return 0;
}