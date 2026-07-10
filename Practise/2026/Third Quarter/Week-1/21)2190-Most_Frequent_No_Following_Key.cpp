#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i =0;i<n-1;i++){
            if(nums[i]==key){
                freq[nums[i+1]]++;
            }
        }
        int count =0;
        int ans = 0;
        for(auto&it:freq){
            if(it.second>count){
                ans=it.first;
                count=it.second;
            }
        }
        return ans;
    }
};


