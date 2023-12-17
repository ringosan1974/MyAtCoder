#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h, m, s;
    int amari;
    h = n/3600;
    amari = n%3600;
    m = amari/60;
    amari = amari%60;
    s = amari;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}