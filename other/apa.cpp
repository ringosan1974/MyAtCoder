#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int b;
    cin >> b;
    for (int i = 1; i <= 15; ++i) {
        long long a = 1;
        for (int j = 0; j < i; ++j) a*= i;
        if (a == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}