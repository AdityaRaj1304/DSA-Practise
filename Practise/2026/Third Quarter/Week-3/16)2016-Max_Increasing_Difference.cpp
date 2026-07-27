#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0;
        int minm = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]>minm){
                ans=max(ans,nums[i]-minm);
            }else{
                minm=nums[i];
            }
        }
        return ans;
    }
};