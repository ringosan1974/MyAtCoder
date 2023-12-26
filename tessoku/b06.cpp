#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> q;
    vector<int> d1(n+1); //あたりの累積和
    vector<int> d2(n+1); //はずれの累積和
    d1[0] = 0;
    d2[0] = 0;
    rep(i, n) {
        d1[i+1] = d1[i] + a[i];
        d2[i+1] = d2[i] + (a[i] == 0);
    }
    int l, r;
    int atari, hazure;
    vector<string> ans(q);
    rep(i, q) {
        cin >> l >> r;
        atari = d1[r] - d1[l-1];
        hazure = d2[r] - d2[l-1];
        if (atari > hazure) {
            ans[i] = "win";
        } else if (atari == hazure) {
            ans[i] = "draw";
        } else {
            ans[i] = "lose";
        }
    }
    rep(i, q) {
        cout << ans[i] << endl;
    }
    return 0;
}