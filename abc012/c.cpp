#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            a += (i+1) * (j+1);
        }
    }
    int b = a - n;
    for (int i = 1; i <= 9; ++i) {
        int c;
        if (b % i == 0) {
            c = b / i;
            if (c <= 9) {
                cout << i << " " << "x" << " " << c << endl;
            }
        }
    }
    return 0;
}