#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i =1;i<n;i+=2){
            int len =0;
            int num = nums[i];
            while(nums[i]){
                nums[i-1]*=10;
                nums[i]/=10;
            }
            num+=nums[i-1];
            ans=min(ans,num);
        }
        return ans;
    }
};