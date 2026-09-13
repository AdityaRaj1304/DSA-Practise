#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<vector<int>> idx(101);
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            idx[nums[i]].push_back(i);
        }
        for (auto v : idx) {
            if (v.size() != 3) {
                continue;
            } else {
                if ((v[1] - v[0]) == (v[2] - v[1])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};©leetcode