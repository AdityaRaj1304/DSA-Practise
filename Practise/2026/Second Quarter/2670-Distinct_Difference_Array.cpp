#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int prefix =0;
        unordered_set<int>pre;
        for(int i =0;i<n;i++){
            int num = nums[i];
            if(!pre.count(num)){
                prefix++;
                pre.insert(num);
            }
            freq[num]--;
            if(freq[num]==0){
                freq.erase(num);
            }
            ans[i]=prefix-freq.size();
        }
        return ans;
    }
};


