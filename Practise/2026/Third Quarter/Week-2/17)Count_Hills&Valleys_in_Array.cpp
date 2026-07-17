#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>distinct;
        distinct.push_back(nums[0]);
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=distinct.back()){
                distinct.push_back(nums[i]);
            }
        }
        int ans = 0;
        for(int i =1;i<distinct.size()-1;i++){
            if((distinct[i]>distinct[i-1]&&distinct[i]>distinct[i+1])||(distinct[i]<distinct[i-1]&&distinct[i]<distinct[i+1])){
                ans++;
            }
        }
        return ans;
    }
};

