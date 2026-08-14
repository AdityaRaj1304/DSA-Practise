#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>>segment;
        int minm = nums[0],maxm=nums[0];
        for(int i=1;i<n;i++){
            if(__builtin_popcount(nums[i])==__builtin_popcount(nums[i-1])){
                minm=min(minm,nums[i]);
                maxm=max(maxm,nums[i]);
            }else{
                segment.push_back({minm,maxm});
                minm=nums[i];
                maxm=nums[i];
            }
        }
        for(int i =1;i<segment.size();i++){
            if(segment[i].first<segment[i-1].second){
                return false;
            }
        }
        return true;
    }
};