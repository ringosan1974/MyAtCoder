#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    for (int i = a; i <= b; i+=d) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
} 
