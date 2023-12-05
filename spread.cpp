#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string a;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (i != 0) {
            a.push_back(' ');
        }
        a.push_back(s.at(i));
    }
    cout << a << endl;
    return 0;
}