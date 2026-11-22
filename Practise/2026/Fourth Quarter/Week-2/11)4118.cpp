#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> helper(vector<int>& a) {
        priority_queue<int> pq;
        int cost = 0;
        for (int i = 0; i < a.size(); i++) {
            int x = a[i] - i;
            if (x < 1) {
                cost += 1 - x;
                x = 1;
            }
            pq.push(x);
            if (pq.top() > x) {
                cost += pq.top() - x;
                pq.pop();
                pq.push(x);
            }
        }
        return {cost, pq.top() + a.size() - 1};
    }

    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return -1;
        int ans = INT_MAX;
        for (int i = 1; i < n - 1; i++) {
            vector<int> left(nums.begin(), nums.begin() + i);
            vector<int> right(nums.rbegin(), nums.rbegin() + n - i - 1);
            auto [lc, lv] = helper(left);
            auto [rc, rv] = helper(right);
            int peak = max(nums[i], max(lv, rv) + 1);
            ans = min(ans, lc + rc + peak - nums[i]);
        }
        return ans;
    }
};

