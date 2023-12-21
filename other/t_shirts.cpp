#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans;
    string s, str;
    vector<string> v;
    cin >> n >> m;
    cin >> s;
    stringstream ss{s};
    while (getline(ss, str, '0')) {
        v.push_back(str);
    }
    int ma = 0;
    for (auto st : v) {
        int count1 = 0;
        int count2 = 0;
        for (auto c : st) {
            if (c == '1') {
                ++count1;
            } else if (c == '2') {
                ++count2;
            }
        }
        if (count1 >= m) {
            ans = count1 - m + count2;
        } else {
            ans = count2;
        }
        ma = max(ans, ma);
    }
    cout << ma << endl;    
    return 0;
}