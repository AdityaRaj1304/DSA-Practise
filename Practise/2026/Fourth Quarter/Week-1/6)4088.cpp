#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak = 0, valley= 0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                peak+=i;
            }else if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                valley+=i;
            }
        }
        return peak-valley;
    }
};