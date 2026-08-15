#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int num:nums){
            ans^=num;
        }
        return ans!=0 ? n:n-1;
    }
};