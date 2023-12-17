#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a(9, vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> a.at(i).at(j);
        }
    }
    for (int i = 0; i < 9; ++i) {
        vector<int> s = a.at(i);
        sort(s.begin(), s.end());
        for (int j = 0; j < 9; ++j) {
            if (s.at(j) != j+1) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        vector<int> s;
        for (int j = 0; j < 9; ++j) {
            s.push_back(a.at(j).at(i));
        }
        sort(s.begin(), s.end());
        for (int j = 0; j < 9; ++j) {
            if (s.at(j) != j+1) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    int countx = 0;
    int county = 0;
    for (int h = 0; h < 3; ++h) {
        for (int i = 0; i < 3; ++i) {
            vector<int> s;
            for (int j = county; j < county+3; ++j) {
                for (int k = countx; k < countx+3; ++k) {
                    s.push_back(a.at(j).at(k));
                }
            }
            sort(s.begin(), s.end());
            for (int j = 0; j < 9; ++j) {
                if (s.at(j) != j+1) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            countx += 3;
        }
        countx = 0;
        county += 3;
    }
    cout << "Yes" << endl;
    return 0;
}