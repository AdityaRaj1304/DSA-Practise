#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int right = 0;
        while(right<n && nums[right]<0){
            right++;
        }
        int left = right-1;
        while(left>=0 && right <n){
            if(abs(nums[left])<=abs(nums[right])){
                ans.push_back(nums[left]*nums[left]);
                left--;
            }else{
                ans.push_back(nums[right]*nums[right]);
                right++;
            }
        }
        while(left>=0){
            ans.push_back(nums[left]*nums[left]);
            left--;
        }
        while(right<n){
            ans.push_back(nums[right]*nums[right]);
            right++;
        }
        return ans;
    }
};



