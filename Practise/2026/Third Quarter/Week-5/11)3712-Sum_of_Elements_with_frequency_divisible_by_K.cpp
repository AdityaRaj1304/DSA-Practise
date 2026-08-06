#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int ans =0;
        for(auto &it:freq){
            if(it.second%k==0){
                ans+=it.first*it.second;
            }
        }
        return ans;
    }
};