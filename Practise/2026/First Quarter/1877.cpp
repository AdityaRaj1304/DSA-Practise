#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int left = 0 , right = nums.size()-1;
        while(left<right){
            int temp = nums[left++]+nums[right--];
            ans = max(ans,temp);
        }
        return ans;
    }
};