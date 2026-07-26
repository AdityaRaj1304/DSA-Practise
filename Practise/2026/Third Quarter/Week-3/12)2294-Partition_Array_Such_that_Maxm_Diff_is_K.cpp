#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int ans = 1;
        sort(nums.begin(),nums.end());
        int minm = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]-minm>k){
                ans++;
                minm=nums[i];
            }
        }
        return ans;
    }
};

