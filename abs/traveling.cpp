#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<tuple<long long, long long, long long>> p = {{0, 0, 0}};
    tuple<long long, long long, long long> t;
    for (int i = 0; i < n; ++i) {
        cin >> get<0>(t) >> get<1>(t) >> get<2>(t);
        p.push_back(t);
    }
    long long tm;
    long long xd;
    long long yd;
    long long rt;
    for (int i = 1; i <= n; ++i) {
        tm = get<0>(p.at(i)) - get<0>(p.at(i-1));
        xd = get<1>(p.at(i)) - get<1>(p.at(i-1));
        yd = get<2>(p.at(i)) - get<2>(p.at(i-1));
        rt = tm - (abs(xd) + abs(yd));
        if (rt < 0 || rt%2 == 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}