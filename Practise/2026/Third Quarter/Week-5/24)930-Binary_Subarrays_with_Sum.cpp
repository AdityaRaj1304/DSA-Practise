#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int slidingWindow(vector<int>&nums,int goal){
        if(goal<0){
            return 0;
        }
        int ans =0;
        int left = 0;
        int sum =0;
        for(int right = 0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return slidingWindow(nums,goal)-slidingWindow(nums,goal-1);
    }
};