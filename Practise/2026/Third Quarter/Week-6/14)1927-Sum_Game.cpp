#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int sum = 0;
        int qleft = 0, qright = 0;
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?') {
                qleft++;
            } else {
                sum += num[i] - '0';
            }
        }
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?') {
                qright++;
            } else {
                sum -= num[i] - '0';
            }
        }
        if ((qleft + qright) % 2) {
            return true;
        }
        return 2 * sum != 9 * (qright - qleft);
    }
};