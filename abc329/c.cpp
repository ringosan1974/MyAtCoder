#include <bits/stdc++.h>
using namespace std;

int getMaxCharnum(string &s, char c) {
    int count = 0;
    int mx = 0;
    s.push_back('0');
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == c) {
            ++count;
        } else {
            mx = max(mx, count);
            count = 0;
        }
    }
    s.pop_back();
    return mx;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < 26; ++i) {
        ans += getMaxCharnum(s, i+'a');
    }
    cout << ans << endl;
    return 0;
}