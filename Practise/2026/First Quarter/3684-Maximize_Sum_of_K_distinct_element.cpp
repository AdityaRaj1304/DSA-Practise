#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        ans.push_back(nums[n-1]);
        int temp = nums[n-1];
        int count = 1 ;
        for(int i = n-2 ;i>=0 && count <k;i--){
            if(nums[i]!=temp){
                ans.push_back(nums[i]);
                temp=nums[i];
                count++;
            }
        }
        return ans;
    }
};