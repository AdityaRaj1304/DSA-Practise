#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first =0 , second = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                second = first;
                first=nums[i];
                ans=i;
            }else if(nums[i]>second){
                second = nums[i];
            }
        }
        if(first>=2*second){
            return ans;
        }
        return -1;
    }
};