#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> query(q);
    int a;
    char b;
    int b2;
    rep(i, q) {
        cin >> a;
        if (a == 1) {
            cin >> b;
            query[i] = {a, b};
        } else {
            cin >> b2;
            query[i] = {a, b2};
        }
    }
    deque<pair<int, int>> deq;
    rep(i, n) deq.push_back({i+1, 0});
    pair<int, int> tmp;
    int c;
    int p;
    int ansx, ansy;
    rep(i, q) {
        if (get<0>(query[i]) == 1) {
            c = get<1>(query[i]);
            tmp = deq.front();
            deq.pop_back();
            if (c == 'R') {
                deq.push_front({get<0>(tmp)+1, get<1>(tmp)});
            } else if (c == 'L') {
                deq.push_front({get<0>(tmp)-1, get<1>(tmp)});
            } else if (c == 'U') {
                deq.push_front({get<0>(tmp), get<1>(tmp)+1});
            } else if (c == 'D') {
                deq.push_front({get<0>(tmp), get<1>(tmp)-1});
            }
        } else if (get<0>(query[i]) == 2) {
            p = get<1>(query[i]);
            ansx = get<0>(deq[p-1]);
            ansy = get<1>(deq[p-1]);
            cout << ansx << " ";
            cout << ansy << endl;
        }
    }
    return 0;
} 
