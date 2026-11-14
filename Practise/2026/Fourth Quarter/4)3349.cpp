#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int curr = 1 , prev=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                curr++;
            }else{
                prev=curr;
                curr=1;
            }
            if(curr>=2*k||(curr>=k&&prev>=k)){
                return true;
            }
        }
        return false;
    }
};