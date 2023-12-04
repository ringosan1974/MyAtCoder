#include <bits/stdc++.h>
using namespace std;

int main() {
    string abcd;
    cin >> abcd;
    vector<int> nums;
    for (int i = 0; i < 4; ++i) {
        nums.push_back(int(abcd.at(i)-'0'));
    }

    vector<string> o(3);
    for (int i = 0; i < 8; ++i) {
        bitset<3> s(i);
        int res = nums.at(0);
        for (int j = 0; j < 3; ++j) {
            if (s.test(j)) {
                res += nums.at(j+1);
                o.at(j) = "+";
            } else {
                res -= nums.at(j+1);
                o.at(j) = "-";
            }
        }
        if (res == 7) {
            break;
        }
    }
    cout << nums.at(0) << o.at(0) << nums.at(1) << o.at(1) << nums.at(2) << o.at(2) << nums.at(3) << "=7" << endl;
    return 0;
}