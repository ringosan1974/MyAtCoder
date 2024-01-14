#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    int ctz;
    for (ctz = 0; n % (1 << ctz) == 0; ++ctz);
    cout << ctz-1 << endl;
    return 0;
} 
