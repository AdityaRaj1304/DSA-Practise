#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans =0;
        for(int num:nums){
            freq[num]++;
            if(freq.count(num+1)){
                ans=max(ans,freq[num]+freq[num+1]);
            }
            if(freq.count(num-1)){
                ans=max(ans,freq[num]+freq[num-1]);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        for(int l=0,r=0;r<n;r++){
            while(nums[r]-nums[l]>1){
                l++;
            }
            if(nums[r]-nums[l]==1){
                ans=max(ans,r-l+1);
            }
        }
        return ans;
    }
};