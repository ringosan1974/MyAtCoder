#include <bits/stdc++.h>
using namespace std;

// 途中
int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> ice;
    long long a;
    long long b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        ice.at(i) = make_pair(a, b);
    }
    sort(ice.rbegin(), ice.rend());
    vector<long long> mx;
    ice.push_back(makepair(0, 0));
    for (int i = 1; i < n; ++i) {
        if (get<0>(ice.at(i)) != get<0>(ice.at(i-1))) {
            mx.push_back(get<1>(ice.at(i-1)));
        }
    }
    long long mx1 = 0;
    long long mx2 = 0;
    mx1 = *max_element(mx.begin(), mx.end());
    mx2 = *max_element(mx.begin(), mx.end());
    return 0;
}