#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1;j<=n ; j++) {
                ll score = (ll)j * (j + 1) / 2;
                if (score > i) {
                    break;
                }
                dp[i] = min(dp[i], dp[i-score] + j + 1);
            }
        }
        return dp[n] - 1;
    }
};