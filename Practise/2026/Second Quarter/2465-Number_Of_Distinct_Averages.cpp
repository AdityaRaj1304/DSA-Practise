#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>s;
        int ans = 0;
        sort(nums.begin(),nums.end());
        int st = 0 , end = nums.size()-1;
        while(st<end){
            double average = (nums[st++]+nums[end--])/2.0;
            s.insert(average);
        }
        return s.size();
    }
};

