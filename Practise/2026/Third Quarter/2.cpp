#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =0;
        if(n==1){
            return 1;
        }
        for(int l=0,r=0;r<n;r++){
            if(nums[r]%k!=nums[l]%k){
                l=r;
            }
            int len = r-l+1;
            int rem = nums[l]%k;
            if(((len-1)%rem)%k==0){
                ans=max(ans,len);
            }
        }
        return ans;
    }
};



