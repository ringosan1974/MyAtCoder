#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    vector<int> a;
    int hoge = -1;
    while (hoge != 0) {
        cin >> hoge;
        a.push_back(hoge);
    }
    rep(i, (int)a.size()) {
        cout << a[(int)a.size() - i - 1] << endl;
    }
    return 0;
} 
