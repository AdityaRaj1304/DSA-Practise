#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool helper(vector<int>& nums, int k, int i) {
        int n = nums.size();
        int next = nums[i] + 1;
        nums[i] = -1;
        int size = 1;
        i++;
        while (i < n && size < k) {
            if (nums[i] == next) {
                next = nums[i] + 1;
                nums[i] = -1;
                size++;
            }
            i++;
        }
        return size == k;
    }
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % k != 0) {
            return false;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                if (!helper(nums, k, i)) {
                    return false;
                }
            }
        }
        return true;
    }
};