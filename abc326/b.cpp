#include <bits/stdc++.h>
using namespace std;

bool is_326like(int n) {
    int a = n / 100;
    int b = (n%100) / 10;
    int c = n % 10;
    return a*b == c;
}

int main() {
    int n;
    cin >> n;
    int i = n;
    while (true) {
        if (is_326like(i)) {
            cout << i << endl;
            break;
        } else {
            ++i;
        }
    }
    return 0;
}