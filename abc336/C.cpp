#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;


int main() {
    ll n;
    cin >> n;
    ll a = n-1;
    ll i = 0;
    vector<int> ans;
    while (true) {
        ll b = a % 5;
        ans.push_back(b*2);
        a = a / 5;
        if (a == 0) {
            break;
        }
    }
    reverse(all(ans));
    rep(i, (int)ans.size()) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
} 
