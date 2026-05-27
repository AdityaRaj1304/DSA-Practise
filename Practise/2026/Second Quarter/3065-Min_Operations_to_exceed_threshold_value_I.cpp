#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int num:nums){
            if(num<k){
                ans++;
            }
        }
        return ans;
    }
};