#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans =INT_MAX;
        for(int left=0;left+l<=n;left++){
            int sum=0;
            for(int right=left;right<n&&right-left<r;right++){
                sum+=nums[right];
                if(right-left+1>=l && sum>0){
                    ans=min(ans,sum);
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};