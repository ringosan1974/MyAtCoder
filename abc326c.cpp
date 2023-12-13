#include <bits/stdc++.h>
using namespace std;

// TLEになったので書き直し中
// 現段階ではエラって無理
// 解答を読むと尺取り法か二部探索と書いてあった。尺取り法を使って実装してみたい
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a.at(i);

    sort(a.begin(), a.end());
    vector<int> x(1000000000, 0);
    for (int i = 0; i < a.size(); ++i) {
        x.at(a.at(i))++;
    }
    for (int i = 0; i < a.size(); ++i) cout << x.at(i) << endl;

    return 0;
}