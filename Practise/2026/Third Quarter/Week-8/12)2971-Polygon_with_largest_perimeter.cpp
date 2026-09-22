#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        ll ans = accumulate(nums.begin(),nums.end(),0LL);
        for(int i = n-1;i>1;i--){
            if(ans-nums[i]>nums[i]){
                return ans;
            }
            ans-=nums[i];
        }
        return -1;
    }
};