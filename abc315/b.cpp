#include <bits/stdc++.h>
using namespace std;

// 解答AC
int main() {
    int m;
    cin >> m;
    vector<int> d(m);
    int s = 0;
    for (int i = 0; i < m; ++i) {
        cin >> d.at(i);
        s += d.at(i);
    }
    int all = s;
    int mid = (all+1)/2;
    // vectorの at(i-1) と at(i) を比較すると、もれ・だぶりが起こりやすいかもしれない
    // できるだけそういうコードは控えたい
    for (int i = 0; i < m; ++i) {
        if (mid <= d.at(i)) {
            cout << i+1 << " " << mid << endl;
            return 0;
        } else {
            mid -= d.at(i);
        }
    }
    return 0;
}