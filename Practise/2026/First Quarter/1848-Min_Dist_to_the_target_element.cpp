#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans =INT_MAX;
        int left = 0 ,right = nums.size()-1;
        while(left<=right){
            if(nums[left]==target){
                ans=min(ans,abs(left-start));
            }
            if(nums[right]==target){
                ans=min(ans,abs(right-start));
            }
            left++,right--;
        }
        return ans;
    }
};