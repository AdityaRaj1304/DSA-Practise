#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int size = 2;
        for(int i =2;i<n;i++){
            if(nums[i]==(nums[i-1]+nums[i-2])){
                size++;
            }else{
                size=2;
            }
            ans=max(ans,size);
        }
        return ans;
    }
};


