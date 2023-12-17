#include <bits/stdc++.h>
using namespace std;

// agcわがんね
int main() {
    long long n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a.at(i);
    sort(a.rbegin(), a.rend());
    long long mx = 0;
    vector<long long> v;
    for (int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            for (int k1 = 1; k1 <= k; ++k1) {
                if ((a.at(i)-a.at(j))%k == k-k1) {
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+j);
                    v.push_back(k-k1);
                    break;
                }
            }
        }
    }
    return 0;
}