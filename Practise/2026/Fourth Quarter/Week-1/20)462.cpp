#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        int median = nums[n/2];
        for(int num:nums){
            ans+=abs(median-num);
        }
        return ans;
    }
};