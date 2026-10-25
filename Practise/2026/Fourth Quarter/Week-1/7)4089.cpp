#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        ll ans =0;
        for(int l=0,r=0;r<n;r++){
            if (nums[r] < minK || nums[r] > maxK) {
                l = r + 1;
            }
            ans+=(r-l+1);
        }
        return ans;
    }
};
