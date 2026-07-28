#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int num:nums){
            if(num==nums[n/2]){
                count++;
            }
        }
        return count==1?true:false;
    }
};

