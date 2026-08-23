#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// class Solution {
// public:
//     vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         vector<vector<int>>ans;
//         int idx =0;
//         while(nums[idx]<lower){
//             idx++;
//         }
//         int st = lower , end = lower ;
//         bool valid = false;
//         for(int i =lower;i<=end;i++){
//             if(nums[i]!=i && !valid){
//                 st=i;
//                 valid=true;
//             }else if(nums[i]==i&&valid){
//                 end = i-1;
//                 if(end+1==st){
//                     end=st;
//                 }
//                 ans.push_back({st,end});
//                 valid = false;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int idx = 0;
        int next = lower;
        while (idx < n && nums[idx] < lower) {
            idx++;
        }
        while (idx < n && next <= upper) {
            if (nums[idx] == next) {
                next++;
                idx++;
            } else if (nums[idx] > next) {
                int end = min(nums[idx] - 1,upper);
                ans.push_back({next, end});
                next = nums[idx] + 1;
                idx++;
            } else {
                idx++;
            }
        }
        if (next <= upper) {
            ans.push_back({next, upper});
        }     
        return ans;
    }
};