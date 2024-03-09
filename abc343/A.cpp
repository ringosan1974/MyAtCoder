#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != '|') {
        cout << s[i];
        i++;
    }
    i++;
    while (s[i] != '|') {
        i++;
    }
    i++;
    while (i < (int)s.size()) {
        cout << s[i];
        i++;
    }
    return 0;
} 
