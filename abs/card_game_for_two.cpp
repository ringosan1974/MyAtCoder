#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, al, bo;
    al = 0;
    bo = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a.at(i);
    if (n % 2 == 1) {
        ++n;
        a.push_back(0);
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n/2; ++i) {
        al += a.at(0);
        a.erase(a.begin());
        bo += a.at(0);
        a.erase(a.begin());
    }
    cout << al - bo << endl;
    return 0;
}