#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =0;
        int one = 0 , zero =0;
        for(int l=0,r=0;r<n;r++){
            nums[r]==1?one++:zero++;
            while(l<n&&zero>k){
                nums[l]==0?zero--:one--;
                l++;
            }
            ans=max(ans,one);
        }
        return ans;
    }
};