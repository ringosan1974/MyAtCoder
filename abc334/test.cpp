#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()

int main() {
    int x = -4;
    int m = 3;
    cout << (x % m + m) % m << endl;
    return 0;
}