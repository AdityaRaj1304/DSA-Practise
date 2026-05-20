#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int ans = 0;
        int total = 0;
        for(int num : nums){
            total ^= num;
        }
        if(total == target){
            return 0;
        }
        
    }
};