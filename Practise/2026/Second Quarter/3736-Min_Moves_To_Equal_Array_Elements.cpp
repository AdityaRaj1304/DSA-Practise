#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int maxm = *max_element(nums.begin(),nums.end());
        for(int num:nums){
            ans+=(maxm-num);
        }
        return ans;
    }
};