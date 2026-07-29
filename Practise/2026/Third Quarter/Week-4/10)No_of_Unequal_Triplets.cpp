#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n =nums.size();
        int ans = 0;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    continue;
                }
                for(int k =j+1;k<n;k++){
                    if(nums[i]!=nums[k] && nums[k]!=nums[j]){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int st = 0 , end = 0 , curr =0;
        for(auto&it:freq){
            curr=it.second;
            end=n-curr-st;
            ans+=(st*end*curr);
            st=curr;
        }
        return ans;
    }
};