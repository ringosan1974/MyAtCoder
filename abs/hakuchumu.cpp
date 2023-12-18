#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> ss = {"dream", "dreamer", "erase", "eraser"};
    for (string &sss : ss) {
        reverse(sss.begin(), sss.end());
    }
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string st = "";
    bool flag = false;
    for (char c : s) {
        st.push_back(c);
        for (string sss : ss) {
            if (st == sss) {
                flag = true;
                st = "";
                break;
            } else {
                flag = false;
            }
        }
    }
    if (flag == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}