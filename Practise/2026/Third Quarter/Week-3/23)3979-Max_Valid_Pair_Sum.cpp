#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxm(n,0);
        maxm[0]=nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]>maxm[i-1]){
                maxm[i]=nums[i];
            }else{
                maxm[i]=maxm[i-1];
            }
        }
        int ans = 0;
        for(int i =k;i<n;i++){
            ans=max(ans,nums[i]+maxm[i-k]);
        }
        return ans;
    }
};


