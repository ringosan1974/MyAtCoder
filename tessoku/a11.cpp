#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int left, right, mid;
    left = 0;
    right = n-1;
    mid = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (x < a[mid]) {
            right = mid - 1;
        } else if (x > a[mid]) {
            left = mid + 1;
        } else {
            break;
        }
    }
    cout << mid+1 << endl;
    return 0;
}