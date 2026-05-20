#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int total = accumulate(nums.begin(),nums.end(),0);
        int bags = nums.size()+maxOperations;
        return total/bags;
    }
};