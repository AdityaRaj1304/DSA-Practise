#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                int diff = nums[i-1]-nums[i];
                ans+=diff+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }
};