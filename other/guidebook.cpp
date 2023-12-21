#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<tuple<string, int, int>> r;
    string s;
    int p;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s >> p;
        // sortしたときにpを降順にしたいのでpに-1をかけておく
        r.push_back(make_tuple(s, p*(-1), i+1));
    }

    // まず第１要素を辞書順にソート、同一のものだけ第２要素を降順にソート
    // 同じ点数がついていることはないので第３要素は考えなくてよし
    sort(r.begin(), r.end());
    for (auto v : r) {
        cout << get<2>(v) << endl;
    }
    return 0;

}