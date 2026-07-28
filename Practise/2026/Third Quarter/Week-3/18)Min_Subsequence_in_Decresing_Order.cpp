#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int total = accumulate(nums.begin(),nums.end(),0);
        int threshold = total/2;
        vector<int>ans;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            if(sum>threshold){
                return ans;
            }
            sum += nums[i];
            ans.push_back(nums[i]);
        }
        return ans;
    }
};



