#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        long long resource = k;
        long long ans = 0;
        long long curr = 1;
        for (int x : nums) {
            if (resource >= x) {
                resource -= x;
            } else {
                long long count = (x - resource + k - 1) / k; 
                resource += count * 1LL * k;
                resource -= x;
                long long cost = 1LL * count * curr + 1LL * count * (count - 1) / 2;
                curr += count;
                ans = (ans + cost) % MOD;
            }
        }
        return (int)ans;
    }
};


class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1000000007;
        long long resource = k;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (resource >= nums[i]) {
                resource -= nums[i];
            } else {
                long long count = (nums[i] - resource + k - 1) / k;
                ans += count;
                resource += count * 1LL * k;
                resource -= nums[i];
            }
        }
        long long a = ans;
        long long b = ans + 1;
        if (a % 2 == 0)
            a /= 2;
        else
            b /= 2;

        return (a % MOD) * (b % MOD) % MOD;
    }
};