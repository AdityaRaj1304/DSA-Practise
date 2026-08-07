#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans =0;
        for(int i =0;i<nums.size();i++){
            if(__builtin_popcount(nums[i])==k){
                ans+=nums[i];
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>freq;
        int rows =0;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>rows){
                rows=freq[num];
            }
        }
        vector<vector<int>>ans(rows);
        for(auto&it:freq){
            int idx =0;
            while(it.second--){
                ans[idx++].push_back(it.first);
            }
        }
        return ans;
    }
};