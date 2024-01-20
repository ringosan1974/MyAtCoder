 #include <bits/stdc++.h>
 using namespace std;
 
 #define rep(i, n) for (int i = 0; (i) < (n); ++(i))
 #define all(a) (a).begin(), (a).end()
 using ll = long long;
 
 int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> ans;
    vector<pair<int, int>> vp;
    rep(i, n) {
        if (a[i] == -1) {
            a[i] = 0;
        }
        vp.push_back({a[i], i+1});
    }
    sort(all(vp));
    vector<int> hu(n);
    vector<int> na(n);
    rep(i, n) {
        na[i] = get<0>(vp[i]);
        hu[i] = get<1>(vp[i]);
    }
    int ind = 0;
    ans.push_back(hu[ind]);
    rep(i, n) {
        ind = lower_bound(all(na), hu[ind]) - na.begin();
        ans.push_back(hu[ind]);
    }
    rep(i, n) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}