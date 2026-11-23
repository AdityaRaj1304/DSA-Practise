#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        ll ans =LLONG_MAX;
        vector<int>pfx(n,0),sfx(n,0);
        for(int i =1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                pfx[i]=i;
            }else{
                pfx[i]=pfx[i-1];
            }
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=nums[i+1]){
                sfx[i]=n-i-1;
            }else{
                sfx[i]=sfx[i+1];
            }
        }
        for(int i =1;i<n-1;i++){
            ans=min(ans,1LL*nums[i]*(pfx[i]+sfx[i]));
        }
        return ans;
    }
};