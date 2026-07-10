#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pairs = 0;
        int left = 0;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto&it:freq){
            pairs+=it.second/2;
            left+=it.second%2==0 ? 0:1;
        }
        return {pairs,left};
    }
};


