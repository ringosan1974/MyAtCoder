#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<long int> index;
    vector<long int> a;
    vector<long int> p;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    p.push_back(0);
    for (int i = 1; i < n; ++i) {
        int b;
        cin >> b;
        p.push_back(b);
    }
    // なにもわからなかった
    
    return 0;
}