#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    ll n;
    ll ans = 0;
    cin >> n;
    queue<ll> q;
    q.push(n);
    while (true) {
        if (q.front() >= 2) {
            ans += q.front();
            q.push(q.front() / 2);
            q.push((q.front()+1)/2);
        } else {
            q.pop();
        }
        if (q.size() == 0) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
} 
