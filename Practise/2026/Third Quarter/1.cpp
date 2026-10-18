#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        int product = INT_MIN;
        vector<int> ans(2, -1);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    if (nums[i] > nums[j]) {
                        if (nums[i] * nums[j] > product) {
                            product = nums[i] * nums[j];
                            ans = {i, j};
                        }
                    }else if(nums[j] > nums[i]) {
                        if(nums[j] * nums[i] > product) {
                            product = nums[j] * nums[i];
                            ans = {j, i};
                        }
                    }
                }
            }
        }
        return ans;
    }
};