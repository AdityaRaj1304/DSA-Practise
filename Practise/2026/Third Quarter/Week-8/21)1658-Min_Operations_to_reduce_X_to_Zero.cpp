#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);
        int target = total-x;
        int l = 0;
        int len = -1;
        int sum =0;
        for(int r =0;r<n;r++){
            sum+=nums[r];
            while(l<=r&&sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target){
                len=max(len,r-l+1);
            }
        }
        return len==-1?-1:n-len;
    }
};