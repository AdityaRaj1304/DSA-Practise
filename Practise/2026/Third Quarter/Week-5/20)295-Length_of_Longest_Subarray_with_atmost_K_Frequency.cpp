#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =0;
        int left  = 0;
        unordered_map<int,int>freq;
        for(int right=0;right<n;right++){
            freq[right]++;
            while(freq[right]>k){
                freq[left]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};

